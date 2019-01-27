/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab.pkg5.practice.q1;

/**
 *
 * @author sahim
 */
public class SLLSet {
    private int size;
    private SLLNode head;
    
    public SLLSet(){
        size = 0;
        head = null;
    }
    
    public SLLSet(int[] sortedArray){
        if(sortedArray.length > 0){
            int i;
            SLLNode p = new SLLNode(sortedArray[0],null);
            size = sortedArray.length;
            head = p;
            for(i = 1;i<sortedArray.length;i++){
                p.next = new SLLNode(sortedArray[i],null);
                p = p.next;
            }
        }
        else{
            size = 0;
            head = null;
        }
    }//End of SLLSet constructor
        
    public int getSize(){
        return size;
    }//Returns the size of the list
    
    public SLLSet copy(){
            int[] list = new int[size];
            int i = 0;
            SLLNode p = head;
            while(p != null){
                list[i] = p.value;
                p = p.next;
                i++;
            }
            SLLSet s = new SLLSet(list);
            s.size = size;
            return s;
    }//End of copy function
    
    public boolean isIn(int v){
        SLLNode p = head;
        while(p != null){
            if(p.next == null){
                break;
            }
            if(p.value == v){
                return true;
            }
            p = p.next;
        }
        return false;
    }//End of isIn
    
    public void add(int v){
        SLLNode p = head;
        if(this.isIn(v) == false){
            if(head == null){
                head = new SLLNode(v,null);
            }
            else if(head.value > v){
                head = new SLLNode(v,head);
            }
            else{
                int x;
                while(p.next != null){
                    x = p.next.value;
                    if(v < x && v > p.value){
                        p.next = new SLLNode(v,p.next);
                    }   
                    p = p.next;
                }
                if(v > p.value){
                    p.next = new SLLNode(v,null);
                }
            }
            size++;
        }
    }//End of the add function
    
    public void remove(int v){
        SLLNode p = head;
        if(isIn(v)){
            size--;
            if(p.value == v){
                this.head = p.next;
            }
            else{
                while(p != null){
                    if(p.next == null){
                        break;
                    }
                    else if(p.next.value == v){
                        p.next = p.next.next;
                        break;
                    }
                    p = p.next;
                }
            }
        }
    }
    
    public SLLSet union(SLLSet s){
        SLLSet union = this.copy();
        SLLNode j = s.head;
        if(s.head != null){
            while(j != null){
                union.add(j.value);
                j = j.next;
            }
        }
        return union;
    }
    
    public SLLSet intersection(SLLSet s){
        SLLSet inter = new SLLSet();
        SLLNode p = this.head;
        SLLNode q = s.head;
        if(q != null || p != null){
            while(p != null){
                q = s.head;
                while(q != null){
                    if(p.value == q.value){
                        inter.add(p.value);
                    }
                    q = q.next;
                }
                p = p.next;
            }
        }
        return inter;
    }
    
    public SLLSet difference(SLLSet s){
        SLLSet diff = this.union(s);
        SLLNode p = this.head;
        while(p != null){
           if(s.isIn(p.value)){
               diff.remove(p.value);
            }
            p = p.next;           
        }
        p = s.head;
        while(p != null){
            if(this.isIn(p.value)){
               diff.remove(p.value);
            }
            p = p.next;
        }
        return diff;
    }
    
    public static SLLSet union(SLLSet[] sArray){
        int i;
        SLLSet uni = new SLLSet();
        //SLLSet uni = sArray[0].copy();
        for(i = 0;i<sArray.length;i++){
            uni  = uni.union(sArray[i]);
        }
        return uni;
    }
    
    public String toString(){
        SLLNode p = head;
        String s;
        s = "(";
        while(p != null){
            s += p.value;
            p = p.next;
            if(p != null){
                s += ",";
            }
        }
        s += ")";
        return s;
    }//Prints out the nodes
}
