class Solution {
    public boolean isValid(String s) {
        int size = s.length();
        int traverse;
        char current;
        Stack<Character> bracket = new Stack<Character>();
        
        //Determine valid characters
        for(traverse = 0;traverse < size;traverse++){
            current = s.charAt(traverse);
            if(current == '(' || current == '[' || current == '{'){
                bracket.push(current);//push onto stack
                continue;
            }
            //Empty Case
            if(bracket.empty())
                return false;
            //Char current is not an opening bracket
            switch(current){
                case ')':
                    if(bracket.pop() != '(')
                        return false;
                        break;
                case ']':
                    if(bracket.pop() != '[')
                        return false;
                        break;
                case '}':
                    if(bracket.pop() != '{')
                        return false;
                        break;
            }
            
            
        }
        ///Check empty
        return bracket.empty();
        
        
    }
}
