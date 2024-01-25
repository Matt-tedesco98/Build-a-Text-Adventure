#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main(){
using namespace std;

cout << "\t\t  __________________________ \n";
cout << "\t\t |          Beauty          |\n";
cout << "\t\t |         and the          |\n";
cout << "\t\t |          Beast           |\n";
cout << "\t\t |      Text Adventure!     |\n";
cout << "\t\t |__________________________|\n";

cout<< "\n\n\nAn enchantress, disguised as an old beggar, offers an enchanted rose to a young prince in exchange for shelter in his castle from the bitter cold";
cout<<"\n\nbut he refuses.";
cout<<"\n\nFor his arrogance, the enchantress transforms him into a beast and inflicts a spell on the castle.";
cout<<"\n\nShe gives him a magic mirror that enables him to view faraway events, along with the rose.";
cout<<"\n\nTo break the spell, the prince must learn to love another and earn her love in return before the rose's last petal falls on his 21st birthday. If he fails, he will remain a beast forever.\n";

cout<<"\n\n\nTen years later, a young bookworm girl named belle is bored of her village life and seeks excitement";

cout<<"\n\nThis is where you take over!";
cout<<"\nWhat do you do when your dad wants to show off his new invention at the fair?\n\n";
char choice1;

for(int i = 0; i < 3 && choice1 != 'a' && choice1 != 'b';i++){
  cout << "Choice A: You go with your father, ride with him and his horse Phillipe to the fair\n";
  cout << "Choice B: Your father goes along his was to the fair alone with Phillipe\n";
  cin >> choice1;
}

if(choice1 != 'a' && choice1 != 'b'){
  cout <<"\nInvalid input please try again\n";
  return 0;
}else if(choice1 == 'a'){
  cout << "\n\nYou and your father walk into the woods follow the trails and arrive at the fair.\n";
  cout << "To your suprise the invention your father makes wins and many investors come to buy the product for their everyday life";
  cout << "\n\nYour family is now rich!!\n\n";
  cout << "With your new found wealth you go and make your city the hub of trade and invention, you give a man named louis some start up money for something he is working on\n";
  cout <<"The man Louis Vuitton creates a fashion empire and you now own part of the company you and your family never have to work again for generations to come!";
  cout << "\n\n\t\t ~The end~\n";
  return 0;}

cout << "\n\nMaurice and his horse Phillipe get lost in the forest while traveling to a fair to present his newest invention\n";
cout << "When Phillipe abandons Maurice, he comes across the Beast's castle\n";
cout << "Inside, he meets Lumière the maître d’/candelabra, Cogsworth the majordomo/mantel clock, Mrs. Potts the head cook/teapot, and her son Chip the teacup\n";
cout << "They offer him their service; however, the Beast discovers and imprisons Maurice.\n";
cout << "Phillipe comes back to lead you to the Beast's castle so that you can help your dad\n\n";
char choice2;

for(int i = 0; i < 3 && choice2 != 'a' && choice2 != 'b';i++){
  cout << "Choice A: Give up on your dad and marry Gaston\n";
  cout << "Choice B: Switch places with your dad\n";
  cin >> choice2;
}

switch(choice2){
    case 'a':
        cout << "You marry Gaston you live a life of regret\n";
        cout << "The life you live is bland you both get into fights over little things\n";
        cout << "you become very unhappy with what you chose and now wonder what if?\n";
        cout << "\n\n\t\t ~The end~\n";
        return 0;

    case 'b':
        cout << "the Beast accepts your offer to switch";
        break;
    default:
        cout << "Sorry, you haven't entered a valid choice.\n";
        cout << "Goodbye.\n";
        return 0;
}

cout << "Maurice returns to town but is unable to convince the others to rescue you.\n";
cout << "\n The Beast sulks in his room when you refuses to have dinner with him that night.\n";
cout << " Despite this, Lumière offers you a meal.\n";
cout<< "While he and Cogsworth also give you a tour of the castle, you wanders into the forbidden West Wing.\n";
cout<< "When the Beast frightens her out into the forest, you encounters a pack of wolves.\n";
cout<<"The Beast rescues you but he gets injured in the process.\n";
cout<<"the beast begins to develop feelings for you while you nurses the beats's wounds and he delights you by showing his extensive library.\n";
cout<<"While the two bond in the Beast's castle, Gaston pays Monsieur D'Arque to send Maurice to the town's insane asylum if you refuses Gaston's proposal again.\n";
cout<< "Sharing a romantic evening dance together, you tells the Beast she misses her father. He lets her use his magic mirror to see him.\n";
cout<< "you sees Maurice dying in the woods trying to reach the castle.\n\n";
char choice3;

for(int i = 0; i<3 && choice3 != 'a' && choice3 != 'b';i++){
    cout<<"Choice A: You ignore him dying and carry on with your evening\n";
    cout<<"Choice B: You ask the beast if you can rescue him\n";
    cin>>choice3;
}

switch (choice3)
{
case 'a':
    cout<<"you two continue dancing and have wonderful evening\n";
    cout<<"The beats tells you he has feelings for you and you guys live on in the castle but the memory of your dad haunts you forever\n";
    cout << "\n\n\t\t ~The end~\n";
    return 0;

case 'b':
    break;

default:
    cout << "Sorry, you haven't entered a valid choice.\n";
    cout << "Goodbye.\n";
    return 0;
}

cout<<"\n\nThe Beast lets you go out to save him and he gives you the mirror to remember him by.\n";
cout<<"Chip stows away; you finds Maurice and bring him home.\n";
cout<<"As Gaston is about to forcibly bring Maurice to the asylum, you proves Maurice's sanity by showing the Beast with the magic mirror.\n";
cout<<"Realizing that Belle loves the Beast, Gaston convinces the villagers that the Beast is a man-eating monster and leads them to the castle to kill him.\n\n";
char choice4;

for (int i = 0; i < 3 && choice4 != 'a' && choice4 != 'b' && choice4 != 'c'; i++)
{
    cout<<"Choice A: You return to the castle and help the beast\n";
    cout<<"Choice B: You stay with your father in the town\n";
    cout<<"Choice C: You try and stop the villagers from attacking the beast\n";
    cin>>choice4;
}

if (choice4 != 'a' && choice4 != 'b' && choice4 != 'c')
{
    cout << "Sorry, you haven't entered a valid choice.\n";
    cout << "Goodbye.\n";
    return 0;
} else if (choice4 == 'a')
{
    cout<<"\n\nWith Chip's aid, Maurice and you escape from confinement.\n";
    cout<<"While the villagers are fended off by the servants, Gaston fights the Beast.\n";
    cout<<"The Beast initially is too depressed to fight back, but perks up after seeing you return to the castle.\n";
    cout<<"He corners Gaston, but spares his life and orders him to leave.\n";
    cout<<"However, when the Beast turns to you, a mad Gaston fatally stabs him, but then loses his footing and falls to his death.\n";
    cout<<"You professes your love for the Beast, who dies before the last rose petal falls.\n";
    cout<<"With the spell broken, the Beast reverts to his true form alive!\n\n";
    cout<<"The servants resume their human forms and the castle is restored to its former glory\n\n";
    cout<<"you dances with the prince in the ballroom as everyone watches in delight.\n";
    cout << "\n\n\t\t ~The end~\n";
    return 0;
} else if (choice4 == 'b')
{
    cout<<"The beast is killed the spell remains\n";
    cout<<"You try and live a normal life but something haunts you every day\n";
    cout<<"You wonder what could have been and ponder if you have chosen differently if you would be happy\n";
    cout<<"The world may never know\n";
    cout << "\n\n\t\t ~The end~\n";
    return 0;
}else if (choice4 == 'c')
{
    cout<<"They attack you and throw you in the insane asylum\n";
    cout<<"You never see the light of day again\n";
    cout<<"\n\n\t\t~The end~\n";
    return 0;
}
}