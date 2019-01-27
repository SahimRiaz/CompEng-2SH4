/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab.pkg5.test;

/**
 *
 * @author gandev
 */
public class MyNode 
{
    //Create a node class and setting default values
    String word;
    MyNode next;
    
    MyNode(String w,MyNode n)
    {
        this.word=w;
        this.next=n;
    }
    
}