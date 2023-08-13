#include <iostream>
#include <string>
using namespace std;

void borrowbook();
void displaylist();
int search();

int main (){
    int choice;
    cout << "\t\t==============================================================\t\t" << endl;
    cout << "\t\t               GROUP 5 BOOK BORROWING SYSTEM                  \t\t" << endl;
    cout << "\t\t==============================================================\t\t" << endl;

    do {
        cout << "[1.] Borrow Book \n";
        cout << "[2.] Search for Books \n";
        cout << "[3.] Quit \n";
        cout << "Please choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                borrowbook();
            break;
            case 2:
                search();
            break;
            case 3:
            break;
            default:
                cout << "Invalid Input. Try Again. \n ";
            break;
        }
    } while (choice != 3);
    return 0;
}

void borrowbook(){
    string name, address, department, booktitle, date, due, phoneno;
    int age;

    cout << "Please fill up your Personal Information Record. \n";
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Age:  ";
    cin >> age;
    cin.ignore();

    cout << "Address: ";
    getline(cin, address);
    cout << "Department: ";
    getline(cin, department);

    cout << "Please fill up the Borrower's Sheet. \n";
    cout << "Title of the Book: ";
    getline(cin, booktitle);

    cout << "Date Requested: ";
    getline (cin, date);

    cout << "Due Date: ";
    getline (cin, due);

    cout << "Phone Number: ";
    getline(cin, phoneno);

    cout << "\t\t==============================================================\t\t" << endl;
    cout << "\t\t=                  BOOK BORROWING SHEET                      =\t\t" << endl;
    cout << "\t\t==============================================================\t\t" << endl;
    cout << "\n\n";

    cout << "\t\tBorrower's Name: " << name << "\t\t\n";
    cout << "\t\tAge: " << age << "\t\t\n";
    cout << "\t\tAddress: " << address << "\t\t\n";
    cout << "\t\tDepartment: " << department << "\t\t\n";
    cout << "\t\tTitle of the Book: " << booktitle << "\t\t\n";
    cout << "\t\tDate Requested: " << date << "\t\t\n";
    cout << "\t\tDue Date: " << due << "\t\t\n";
    cout << "\t\tPhone Number: " << phoneno << "\t\t\n";

    return;
}

void displaylist (){
    string booklist[5][5] = {
        {"Lord of the Rings", "The Hobbit", "Game of Thrones", "Narnia", "Harry Potter and the Philiosopher's Stone"},
        {"Star Wars", "Star Trek", "Dune", "The Martian", "Frankenstein"},
        {"Gone Girl", "The Girl in the Train", "The Da Vinci Code", "In the Woods", "The Silent Patient"},
        {"Red, White, and Royal Blue", "The Hating Game", "Fifty Shades of Grey", "To all the Boys I've Loved Before", "The Kiss Quotient"},
        {"Becoming", "The Diary of a Young Girl", "I am Malala: The Girl who stood up for Education", "When Breath Becomes Air ", "The Autobiography of Malcolm X"}
    };

    cout << "List of Books: \n";
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << booklist[i][j] << endl; 
        }
    }
}

int search(){
    string bookgenre[5] = {"Fiction", "Sci-Fi", "Mystery", "Romance Novel", "Autobiography"};
    string fiction[5] = {"Lord of the Rings", "The Hobbit", "Game of Thrones", "Narnia", "Harry Potter and the Philiosopher's Stone"};
    string scifi[5] = {"Star Wars", "Star Trek", "Dune", "The Martian", "Frankenstein"};   
    string mystery[5] = {"Gone Girl", "The Girl in the Train", "The Da Vinci Code", "In the Woods", "The Silent Patient"};
    string romancenovel[5] = {"Red, White, and Royal Blue", "The Hating Game", "Fifty Shades of Grey", "To all the Boys I've Loved Before", "The Kiss Quotient"};
    string autobiographies[5] = {"Becoming", "The Diary of a Young Girl", "I am Malala: The Girl who stood up for Education", "When Breath Becomes Air ", "The Autobiography of Malcolm X"};
    string genre, bookname;
    int subch;
    
    do{
        cout << "[1.] Search by Genres \n";
        cout << "[2.] List of All Books \n";
        cout << "[3.] Back \n";
        cout << "Your Choice: ";
        cin >> subch;
        cin.ignore();

        switch (subch){
            
            case 1:
                for (int a = 0; a < 5; a++){
                    cout << a + 1 << ". " << bookgenre[a] << endl;
                }
                cout << "Enter Genre: ";
                getline(cin, genre);
                cin.clear();

                if (genre == "Fiction") {
                    for (int i = 0; i < 5; i++){
                        cout << i + 1 << "." << fiction[i] << endl;
                    }
                    cout << "Your choice: ";
                    cin >> subch;
                    
                    switch (subch){
                        case 1:
                            cout << "Title: Lord of the Rings \n";
                            cout << "Date: December 20, 2001 \n";
                            cout << "Author: Ronald Reuel Tolkien \n";
                            cout << "Main Characters: Frodo Baggins & Aragorn \n";
                            cout << "Synopsis: The destiny of the One Ring, which has gone missing for millennia, will determine how society develops in the future. Strong forces \n"
                            "are relentless in their pursuit of it. Frodo Baggins (Elijah Wood), a young Hobbit who inherits the Ring and enters mythology,\nis the recipient through fate. As the One "
                            "Ringbearer, Frodo will have the difficult duty of destroying the One Ring \nin the Mount Doom fires where it was created. \n";
                        break;
                        case 2:
                            cout << "Title: The Hobbit \n";
                            cout << "Date: September 21, 1937 \n";
                            cout << "Author: John Ronald Reuel Tolkien \n";
                            cout << "Main Characters: Bilbo Baggins & Gandalf \n";
                            cout << "Synopsis: Bilbo Baggins leads a comfortable life in his cozy hole at Bag End, enjoying the pleasures of being a hobbit. However, his tranquil existence is disrupted when Gandalf the wizard persuades him to join a group of rebellious dwarves on a mission to reclaim their stolen treasure from the dragon Smaug. Initially fearful and doubtful, Bilbo and the dwarves are reassured by Gandalf that there is more to Bilbo than meets the eye, and he will prove his worth as their burglar on this heroic adventure. \n";
                        break;
                        case 3:
                            cout << "Title: Game of Thrones \n";
                            cout << "Date:  August 1, 1996 \n";
                            cout << "Author: George Raymond Richard Martin \n";
                            cout << "Main Characters: Daenerys Targaryen & Arya Stark \n";
                            cout << "Synopsis: For dominance of the Seven Kingdoms, several wealthy families compete on the fictional continent of Westeros. An old foe returns to menace them all as strife breaks out among the kingdoms of men. The last heirs of a recently usurped dynasty are planning to reclaim their homeland from the other side of the Narrow Sea. \n";
                        break;
                        case 4:
                            cout << "Title: Narnia \n";
                            cout << "Date: October 16, 1950 \n";
                            cout << "Author: Clive Staples Lewis \n";
                            cout << "Main Characters: Prince Caspian & Aslan \n";
                            cout << "Synopsis: Four English siblings are transferred to a country cottage where they would be safe during the World War II bombardment of London. Lucy  discovers a wardrobe one day that takes her to the mythical land of Narnia. She soon makes her way back to Narnia alongside her sister Susan, brothers Peter, and Edmund, as well as their parents. There, they join Liam Neeson's mythical lion Aslan in his battle with Tilda Swinton's malevolent White Witch, Jadis. \n";
                        break;
                        case 5:
                            cout << "Title: Harry Potter and the Philosopher's Stone \n";
                            cout << "Date: June 26, 1997 \n";
                            cout << "Author: JK Rowling \n";
                            cout << "Main Characters: The Trio (Harry Potter, Hermoine Granger, Ron Weasley) & Lord Voldemort \n";
                            cout << "Synopsis: Harry Potter endures an abusive life with the Dursley family until he discovers he is a wizard on his eleventh birthday. His parents were killed by the powerful dark wizard Lord Voldemort, and Harry is the only one who survived his curse, leaving him with a distinctive lightning bolt scar. Unaware of his fame within the wizarding world, Harry embarks on his journey to Hogwarts School of Witchcraft and Wizardry. \n";                       
                        break;
                        default:
                            cout << "Book does not exist in our records. \n";
                        break;
                    }
                } else if (genre == "Sci-Fi") {
                    for (int j = 0; j < 5; j++){
                        cout << j + 1 << "." << scifi[j] << endl;
                    }
                    cout << "Your choice: ";
                    cin >> subch;
                    
                    switch (subch){
                        case 1:
                            cout << "Title: Star Wars \n";
                            cout << "Date: November 12, 1976 \n";
                            cout << "Author: George Lucas \n";
                            cout << "Main Characters: Anakin Skywalker & Obi-Wan Kenobi \n";
                            cout << "Synopsis: In an effort to put an end to the Galactic Empire's revolt, the cruel Darth Vader-led Imperial Forces are holding Princess Leia captive. The Millennium Falcon's captains, Luke Skywalker and Han Solo, collaborate with the friendly droid team R2-D2 and C-3PO to save the lovely princess, support the Rebel Alliance, and bring freedom and justice to the galaxy. \n";
                        break;
                        case 2:
                            cout << "Title: Star Trek \n";
                            cout << "Date: January 1967 \n";
                            cout << "Author: Eugene Weasely Roddenberry \n";
                            cout << "Main Characters: Admiral James T. Kirk & Spock \n";
                            cout << "Synopsis: James T. Kirk's father dies defending his ship against Romulan attackers, leaving a lasting impact on Kirk's life. Meanwhile, Ambassador Spock faces prejudice on Vulcan due to his mixed heritage. Kirk becomes a rebellious troublemaker but is challenged by Captain Pike to reach his full potential in Starfleet. With the help of talented cadets and an emergency situation on Vulcan, the newly-commissioned USS Enterprise sets out on a transformative mission, marking the beginning of a new legend in the vastness of space. \n";
                        break;
                        case 3:
                            cout << "Title: Dune \n";
                            cout << "Date: August 1965 \n";
                            cout << "Author: Frank Herbert \n";
                            cout << "Main Characters: Paul Atreides & Duke Leto Atreides \n";
                            cout << "Synopsis: To secure the future of his family and his people, Paul Atreides, a smart and gifted youngster born into a fate greater than his comprehension, must journey to the most hazardous planet in the cosmos. Only those who are able to overcome their own fear will survive as malicious forces erupt into fight over the planet's unique supply of the most priceless resource ever. \n";
                        break;
                        case 4:
                            cout << "Title: The Martian \n";
                            cout << "Date: 2011 \n";
                            cout << "Author:  Andy Weir \n";
                            cout << "Main Characters: Mark Watney & Commander Melissa Lewis \n";
                            cout << "Synopsis: Mark Watney, who is assumed dead following a violent storm, is left behind when astronauts launch from the planet Mars. The stranded visitor must use his brains and willpower to live on the hazardous planet with the little supplies he has. His fellow crew members come up with their own scheme for a risky rescue attempt while back on Earth, representatives of NASA and a group of international experts work feverishly to bring him home. \n";
                        break;
                        case 5:
                            cout << "Title: Frankenstein \n";
                            cout << "Date: January 1, 1818 \n";
                            cout << "Author: Mary Shelley \n";
                            cout << "Main Characters: Victor Frankenstein & Robert Walton \n";
                            cout << "Synopsis: An aspiring writer named Robert Walton embarks on a scientific expedition to the North Pole. During their journey, Walton's crew spots a gigantic figure pulling a dog sled. Later, they rescue a weakened and starved man named Victor Frankenstein. Frankenstein reveals that the colossal figure they saw was his pursued creation, and he shares his own tragic story of personal struggles as a warning to Walton, who exhibits a similar obsession. The events of Frankenstein's tale are intricately woven within the overarching narrative of Walton's expedition. \n";                       
                        break;
                        default:
                            cout << "Book does not exist in our records. \n";
                        break;
                    }
                } else if (genre == "Mystery") {
                    for (int k = 0; k < 5; k++){
                        cout << k + 1 << "." << mystery[k] << endl;
                    }
                    cout << "Your choice: ";
                    cin >> subch;
                    
                    switch (subch){
                        case 1:
                            cout << "Title: Gone Girl \n";
                            cout << "Date: June 2012 \n";
                            cout << "Author: Gillian Flynn \n";
                            cout << "Main Characters: Nick Dunne & Amy Elliott Dunne \n";
                            cout << "Synopsis: Gone Girl by Gillian Flynn revolves around the deteriorating marriage of Nick and Amy Dunne. Nick, facing financial troubles, moves back to his hometown and opens a bar with Amy's money. On their fifth anniversary, Amy disappears, and Nick becomes the prime suspect due to their strained relationship and his use of her funds. As the police investigate, conflicting stories and hidden truths emerge from both Nick and Amy, building suspense until the final revelation. \n";
                        break;
                        case 2:
                            cout << "Title: The Girl in the Train \n";
                            cout << "Date: January 6, 2015 \n";
                            cout << "Author: Paula Hawkins \n";
                            cout << "Main Characters:  Rachel Watson & Megan Hipwell \n";
                            cout << "Synopsis: Rachel, a regular commuter, becomes fixated on a seemingly perfect couple she observes from the train. When she witnesses something shocking one day, it alters her perception of their idyllic life. Compelled to share her discovery with the police, Rachel becomes entangled in the investigation and the lives of those involved, raising questions about her reliability and the consequences of her actions. \n";
                        break;
                        case 3:
                            cout << "Title: The Da Vinci Code \n";
                            cout << "Date: March 18, 2003 \n";
                            cout << "Author: Dan Brown \n";
                            cout << "Main Characters: Sophie Neveu & Robert Langdon \n";
                            cout << "Synopsis: The Da Vinci Code follows symbologist Robert Langdon and cryptologist Sophie Neveu after a murder in the Louvre Museum in Paris causes them to become involved in a battle between the Priory of Sion and Opus Dei over the possibility of Jesus Christ and Mary Magdalene having had a child together \n";
                        break;
                        case 4: 
                            cout << "Title: In the Woods \n";
                            cout << "Date: January 30, 2007 \n";
                            cout << "Author: Tana French \n";
                            cout << "Main Characters: Rob Ryan & Detective O'Kelly \n";
                            cout << "Synopsis: In a Dublin suburb in 1984, three children vanish in the woods, with only one boy found traumatized. Two decades later, Rob Ryan, now a detective, investigates a murder of a girl in the same woods, mirroring the unsolved case from his childhood. With fragmented memories resurfacing, Rob has the opportunity to solve both the current mystery and the enigma of his own dark past, while unveiling a gripping psychological suspense.\n";
                        break;
                        case 5:
                            cout << "Title: The Silent Patient \n";
                            cout << "Date: February 5, 2019 \n";
                            cout << "Author: Alex Michaelides \n";
                            cout << "Main Characters: Alicia Berenson & Theo Faber \n";
                            cout << "Synopsis: Alicia Berenson, a renowned painter married to a successful photographer, shoots her husband Gabriel without explanation and never speaks again. Her silence turns the tragedy into a captivating mystery, propelling her into the public eye. Criminal psychotherapist Theo Faber becomes obsessed with unraveling Alicia's motive, leading him on a perilous journey that risks consuming him in his quest for the truth. \n";                       
                        break;
                        default:
                            cout << "Book does not exist in our records. \n";
                        break;
                    }
                } else if (genre == "Romance Novel") {  
                    for (int l = 0; l < 5; l++){
                        cout << l + 1 << "." << romancenovel[l] << endl;
                    }
                    cout << "Your choice: ";
                    cin >> subch;
                    
                    switch (subch){
                        case 1:
                            cout << "Title: Red, White & Royal Blue \n";
                            cout << "Date: May 14, 2019 \n";
                            cout << "Author: Casey McQuiston \n";
                            cout << "Main Characters: Alex Claremont-Diaz & Prince Henry \n";
                            cout << "Synopsis: Alex Claremont-Diaz, the son of the first female president of the United States, is tasked with pretending to be friends with Prince Henry of Britain to prevent a potential diplomatic scandal. However, their relationship evolves from a political charade into a genuine friendship, and eventually, they develop romantic feelings for each other. While navigating their love and personal identities, they must also consider the impact on their respective positions in the international arena and the implications for his mother's re-election campaign. \n";
                        break;
                        case 2:
                            cout << "Title: The Hating Game \n";
                            cout << "Date: August 9, 2016 \n";
                            cout << "Author: Sally Thorne \n";
                            cout << "Main Characters: Lucy Hutton & Joshua Templeman \n";
                            cout << "Synopsis: Lucy Hutton and Joshua Templeman, rival directors at a publishing company, engage in a game of one-upmanship as they compete for the title of publisher. Their professional rivalry turns into a complicated mix of attraction and animosity, blurring the lines between their genuine feelings and the game they play. In the end, they both realize their love for each other, decide to stop the game, and successfully secure the publisher positions while embarking on a new romantic chapter together. \n";
                        break;
                        case 3:
                            cout << "Title: Fifty Shades of Grey \n";
                            cout << "Date: June 20, 2011 \n";
                            cout << "Author: Erika Mitchell \n";
                            cout << "Main Characters: Christian Grey & Anastasia Steele \n";
                            cout << "Synopsis: Anastasia Steele, a college senior, unexpectedly interviews the enigmatic and wealthy businessman Christian Grey for their campus paper. They feel a strong mutual attraction, leading Ana to embark on a passionate affair with Christian despite her limited sexual experience. However, she soon discovers that Christian's desires extend into unconventional and potentially uncomfortable territory. \n";
                        break;
                        case 4:
                            cout << "Title: To all the Boys I've Loved Before \n";
                            cout << "Date: April 15, 2014 \n";
                            cout << "Author:  Jenny Han \n";
                            cout << "Main Characters: Lara Jean & Peter \n";
                            cout << "Synopsis: Lara Jean Covey's ordinary high school life takes a turn when her secret love letters are accidentally sent to her crushes. As the boys confront her about the letters, chaos ensues, involving her sister's ex-boyfriend and her rival's current partner. Amidst the unexpected events, Lara Jean discovers personal growth, meaningful connections, and a journey of self-discovery. \n";
                        break;
                        case 5:
                            cout << "Title: The Kiss Quotient \n";
                            cout << "Date: May 30, 2018 \n";
                            cout << "Author: Helen Hoang \n";
                            cout << "Main Characters: Stella Lane & Philip James \n";
                            cout << "Synopsis: Stella, a woman with Asperger's who values order and routine, feels lonely and struggles with relationships. Pressured by her mother to date and get married, she hires an escort, Michael, to learn about romantic connections. However, their commercial arrangement unexpectedly evolves into something beyond their initial expectations, leading both Stella and Michael on a transformative journey of love and self-discovery. \n";                       
                        break;
                        default:
                            cout << "Book does not exist in our records. \n";
                        break;
                    }
                } else if (genre == "Autobiographies") {
                    for (int m = 0; m < 5; m++){
                        cout << m + 1 << "." << autobiographies[m] << endl;
                    }
                    cout << "Your choice: ";
                    cin >> subch;
                    
                    switch (subch){
                        case 1:
                            cout << "Title: Becoming \n";
                            cout << "Date: November 13, 2018 \n";
                            cout << "Author: Michelle Obama \n";
                            cout << "Main Characters: Michelle Obama & Barack Obama \n";
                            cout << "Synopsis: Michelle Obama shares her journey from her youth in Chicago to becoming the First Lady of the United States alongside Barack Obama. She reflects on her education, career as a lawyer, and the moment she met Barack. Michelle delves into her responsibilities as First Lady, highlighting initiatives like Let's Move! and Joining Forces aimed at promoting health and supporting military families. She candidly discusses the challenges she faced as an African American woman in the public eye and the impact her family had on her transformative role as First Lady. \n";
                        break;
                        case 2:
                            cout << "Title: The Diary of a Young Girl \n";
                            cout << "Date: June 25, 1947 \n";
                            cout << "Author:  Anne Frank & Otto Frank \n";
                            cout << "Main Characters: Anne Frank & Otto Frank \n";
                            cout << "Synopsis: The diary details Anne's period in hiding between 1942 and 1944, when she kept track of her feelings, ideas, and experiences. She writes about the difficulties of coexisting with others in a small place, the tension and disputes that develop, and the worry that the Nazis will find out. Along with these topics, she also discusses her personal growth and development, her interactions with the other people who shared the hiding place, and her aspirations for the future. \n";
                       
                        break;
                        case 3:
                            cout << "Title: I am Malala: The Girl who stood up for Education  \n";
                            cout << "Date: October 8, 2013 \n";
                            cout << "Author: Malala Yousafzai, Christina Lamb \n";
                            cout << "Main Characters: Malala Yousafzai & Ziauddin Yousafzai \n";
                            cout << "Synopsis: After seizing control of the Swat Valley in 2007, the Taliban enacted severe restrictions that forbade girls from attending school. Despite the threat that these laws brought to her and her family, Malala persisted in speaking out against them. Malala was shot in the head by a Taliban sniper in 2012 as she rode the school bus home. She amazingly survived the assault, was transported to England for medical care, and is still living there with her family today. \n";
                        break;
                        case 4:
                            cout << "Title: When Breath Becomes Air  \n";
                            cout << "Date: January 12, 2016 \n";
                            cout << "Author: Paul Kalanithi  \n";
                            cout << "Main Characters: Paul Kalanithi & Lucy Kalanithi \n";
                            cout << "Synopsis: When Breath Becomes Air follows the life of Paul, a neurosurgeon who is diagnosed with cancer. The book explores his passion for medicine, the challenges he faces in the face of his illness, and his reflections on mortality. It delves into profound questions about the purpose of life, the pursuit of meaningful work, and the fragility of human existence. \n";
                        break;
                        case 5:
                            cout << "Title: The Autobiography of Malcolm X  \n";
                            cout << "Date: October 29, 1965 \n";
                            cout << "Author: Malcolm X, Alex Haley \n";
                            cout << "Main Characters: Malcolm X & Elijah Muhammad \n";
                            cout << "Synopsis: The story starts with Malcolm X's early years, when he was living in poverty in the Midwest and dealing with bigotry and brutality all through his young existence. He started out as a criminal as a young guy, eventually ending up in jail where he was exposed to the Nation of Islam's teachings. Malcolm X considers his own development and progress, as well as his evolving views on politics, religion, and race. \n";                       
                        break;
                        default:
                            cout << "Book does not exist in our records. \n";
                        break;
                    }
                } else {
                    cout << "Genre does not exist in the library. Please enter another genre. \n";
                }
            break;
            case 2:
                displaylist();
            break;
            case 3:
            return 0;
            default:
            cout << "Invalid Input. Try Again. \n ";
            break;
        }

    }while (subch !=3);
    return 0;
}

