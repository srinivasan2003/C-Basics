#include <stdio.h>  
#include <string.h>  
  
  
 
struct library  
{  
    
    char book_name[100];  
     
    char author_name[100];  
   
    int snum;    
};  
  
  

int main()  
{  
   
    struct library lib[100];  
    char book_name[100];  
    int i, j, count;  
    i = 0;    
    int sinput;
    count = 0;  
  

   printf("\n\n 1 => addbook \n\n 2 => List the book \n\n 3 => Total Books \n\n 4 => Reading \n\n 5 => Delete book \n\n 6 => Exit");
  
  
  
    while(j!=8)  
    {  
       
        printf("\n\n Enter the number: ");  
        scanf(" %d", &j); 
      
  
        switch(j)  
        {  
            
            case 1:  
                printf(" \nYou can add the details of the book ");  
                printf(" \nEnter the book name: ");  
                scanf(" %s", lib[i].book_name);  
                printf(" \nEnter the author name: ");  
                scanf(" %s", lib[i].author_name);  
                printf(" \nEnter the snum ");  
                scanf(" %d", &lib[i].snum);  
                count = count + 1;
                i = i + 1;  
                break;  
  
            case 2:  
               
                if (count==0)  
                {  
                    printf(" \nThere are no books stored\n\n ");  
                }  
                else  
                {  
                   
                    printf(" \nYou can view the list of books ");  
                    printf(" \nThe list of books are: ");  
                    for(i=0; i < count; i++)  
                    {  
                        printf(" \nThe name of the book is: %s ", lib[i].book_name);  
                        printf(" \nThe name of the author is: %s ", lib[i].author_name);  
                        printf(" \nThe snum : %d ", lib[i].snum);  
                        printf("\n\n");
                       
                    }  
                }  
                break;  
  
            case 3:  
               
                printf(" \nTotal number of books in the library are: %d\n\n ", count);  
                break;  
              
            case 4:  
                
                printf("\n\n Read Onsite : \n\n");

                printf("Enter SBIN Num : ");
                scanf("%d",&sinput);
                for(i=0; i < count; i++)  
                    {  
                       if(sinput == lib[i].snum){
                        int f = 1;
                        reading(f);
                        f=f+1;
                        if(f > 3){
                            f=1;
                        }

                       }
                    }

                    break;

            case 5:        
                printf("E\n\n Delete the book : \n\n");
                printf("\n\nEnter SBIN Num : ");
                scanf("%d",&sinput);
                for(i=0; i < count; i++)  
                    {  
                       if(sinput == lib[i].snum){
                  
                        if ( i >= count+1 ) {  
                            printf("Deletion not possible.\n");
                        
                        }else{    
                            for (int c = i - 1 ; c < count - 1 ; c++ ){ 
                                    lib[i].snum = lib[c+1].snum;       
                            }         
            
                            printf("Remaining books in Library is : \n");
            
                            for(int c = 0 ; c < count - 1 ; c++ ){        
                                printf(" \nThe name of the book is: %s ", lib[c].book_name);  
                                printf(" \nThe name of the author is: %s ", lib[c].author_name);  
                                printf(" \nThe snum : %d ", lib[c].snum);  
                                printf("\n\n");       
                             }  
                        }
                }   }

                break;


            case 6:  
                
                exit(0);          
                  
            default:  
               
                printf(" \nInvalid \n\n ");  
                break;
        }  
  
    }  

    return 0;
  
}  

int reading(int g){
switch (g)
    {
    case 1 :
        printf("\n\nMiss Lucy and Dr. Singh are letting me visit my house tonight! Normally I get to go home for twelve hours on holidays, and an aide comes with me to monitor my equipment, but today is different. It’s not a holiday, it’s not my birthday, it’s not even the weekend— but I’m going home! Mommy says Lily will be home too even though she goes to college in Iowa. She’s coming home just for me for my special visit. And Daddy says we’re getting my favorite food ever which is Chinese takeout from The Golden Dragon. I never get to eat Chinese in the hospital. The cafeteria is okay… they have ice cream all the time and pizza usually, but never Chinese. I don’t know why. Mommy says to pack my favorite jammies and my stuffed gorilla Nala because tonight, we’re staying up late in our jammies and watching my favorite movie! This is the best day ever. \n\n");
        break;

    case 2 :
        printf("\n\n The door is cerulean, a bright and vibrant blue, but really it is the color of my sudden uneasiness. The feeling creeps up me slowly, jumps out at me dauntingly, and I am frozen in it. If the door were a mirror – and how I wish it were as innocent as a mirror – I would see my face reflected back to me, and it would tell me to run.I’m not sure what’s more jarring: the fact that this door is a clashing contrast to the rest of the library décor, or the fact that I’ve never noticed the path we took to get here before. I supp...  \n\n");
        break;

    case 3 :
        printf("\n\n The door is cerulean, a bright and vibrant blue, but really it is the color of my sudden uneasiness. The feeling creeps up me slowly, jumps out at me dauntingly, and I am frozen in it. If the door were a mirror – and how I wish it were as innocent as a mirror – I would see my face reflected back to me, and it would tell me to run.I’m not sure what’s more jarring: the fact that this door is a clashing contrast to the rest of the library décor, or the fact that I’ve never noticed the path we took to get here before. I supp...  \n\n");
        break;

    case 4 :
        printf("\n\n  Content warning: sexual violence, languageWhen I was four years old, my sister and I were messing around at the pool. I slipped and hit my head on the concrete. It split open in the back. I remember the lifeguard gave me a squishy ball to squeeze. I remember she said I could keep it. I remember my dad scooped me up in his arms. It doesn’t make sense that it happened this way, but I remember he carried me all the way to the emergency room. I remember the pressure of my face pressing into a pillow as the doctor staple.. \n\n");
        break;            
    
    default:
        break;
    }

    return 0;
}
