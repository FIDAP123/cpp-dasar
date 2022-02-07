 for (int i = 0; i < 10; i++)
    {
        std::cout << rand() << std::endl;//tanpa srand
    }
  
    while (true)
    {
        std::cout << "lempar dadu1 ? (y/n)";
        std::cin >> dadu1;
        if (dadu1=='y')
        {
        std::cout << rand()%6 << std::endl;
        }
        else if (dadu1=='n')
        {
            break;
        }
        else
        {
            std::cout << "error salah\n";
        }
        
    }
    