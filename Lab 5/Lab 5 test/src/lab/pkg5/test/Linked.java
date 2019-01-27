/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab.pkg5.test;

/**
 *
 * @author sahim
 */
public class Linked {
    private int size;
    MyNode head;
    
    public Linked(){
        size = 0;
        head = null;
    }
    
    public Linked(String[] array){
        if(array.length > 0){
            MyNode p = new MyNode(array[0],null);
            head = p;
            int i;
            for(i = 1;i<array.length;i++){
                p.next = new MyNode(array[i],null);
                p = p.next;
            }
            size = array.length;
        }
        else{
            size = 0;
            head = null;
        }
    }
    
    public void printNode(){
        MyNode p = head;
        while(p != null){
            System.out.println(p.word);
            p = p.next;
        }
    }
}
