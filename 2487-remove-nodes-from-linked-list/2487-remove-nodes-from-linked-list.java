class Solution {
    public ListNode removeNodes(ListNode head) {
        Stack<Integer> stac=new Stack<>();
        while(head!=null){
            stac.push(head.val);
            head=head.next;
        }
        ListNode newhead=new ListNode(stac.pop());
        int maxi=newhead.val;
        while(!stac.isEmpty()){
            while(!stac.isEmpty() && stac.peek()<maxi){
                stac.pop();
            }
            if(!stac.isEmpty() && stac.peek()>=maxi){
                ListNode newOne=new ListNode(stac.pop());
                maxi=newOne.val;
                newOne.next=newhead;
                newhead=newOne;
            }
        }
        return newhead;
    }
}