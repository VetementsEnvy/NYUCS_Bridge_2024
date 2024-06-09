//#include <iostream>
//#include <string>
//using namespace std;
//
//const int GRID_SIZE = 20;
//const int NUMBER_ANT = 100;
//const int NUMBER_DOODLEBUG = 5;
//const int ANT_BREED_STEPS = 3;
//const int DOODLEBUG_BREED_STEPS = 8;
//const int DOODLEBUG_STARVE_STEPS = 3;
//
//enum class OrganismType {EMPTY, ANT, DOODLEBUG};
//
//
//struct Position
//{
//    int xPos;
//    int yPos;
//};
//class World;
//
//
//class Organism
//{
//private:
//    OrganismType type;
//    Position Pos;
//protected:
//    World& world;
//    
//public:
//    Organism(World& world, OrganismType type, Position Pos):
//    world(world), type(type), Pos(Pos) {};
//    Position GetPostion() const {return Pos;}
//    void SetPostion(const Position& NewPos)
//    {
//        Pos.xPos = NewPos.xPos;
//        Pos.yPos = NewPos.yPos;
//    }
//    OrganismType GetOrganismType() const {return type;}
//    virtual ~Organism() {};
//    virtual void move(World& world) = 0;
//    virtual void breed(World& world) = 0;
//    virtual void starve(World& world) = 0;
//};
//
//
//
//class Ant:public Organism
//{
//private:
//    int stepsAfterLastBreed;
//    
//public:
//    Ant(World& world, OrganismType type, Position Pos):
//    Organism(world, type, Pos), stepsAfterLastBreed(0) {};
//    ~Ant() override {};
//    void move(World& world) override;
//    void breed(World& world) override;
//    void starve(World& world) override;
//    
//};
//
//class World
//{
//private:
//    Organism* grid[GRID_SIZE][GRID_SIZE] = {{nullptr}};
//    int worldTime = 0;
//public:
//    World();
//    ~World();
//    void addDoodlebug(int count);
//    void addAnt(int count);
//    Organism* getOrganism(const Position& pos) const;
//    void placeOrganism(const Position& pos, Organism* organismPtr);
//    void moveOrganism(const Position& currentPos, const Position& newPos,
//                      Organism* organismPtr);
//    void removeOrganism(const Organism* organismPtr);
//    void runSimulationStep();
//    void display();
//    bool IsPositionEmpty(const Position& currentPos) const;
//    bool IsAvailableAdjacent(const Position& currentPos) const;
//    vector<Position> GetAvailableAdjacent(const Position& currentPos) const;
//};
//
//
//
//
//
//
//
//class Doodlebug:public Organism
//{
//private:
//    int stepsAfterLastBreed;
//    int stepsAfterLastEaten;
//    
//    
//    
//public:
//    Doodlebug(World& world, OrganismType type, Position Pos):
//    Organism(world, type, Pos), stepsAfterLastBreed(0),
//    stepsAfterLastEaten(0) {};
//    ~Doodlebug() override {};
//    void move(World& world) override;
//    void breed(World& world) override;
//    void starve(World& world) override;
//};
//
//void Ant::move(World& world)
//{
//    if(!world.IsAvailableAdjacent(this->GetPostion())){return;}
//    vector<Position> availableCells = world.GetAvailableAdjacent(this->GetPostion());
//    int randomDraw = rand() % availableCells.size();
//    Position newPos = availableCells[randomDraw];
//    world.moveOrganism(this->GetPostion(), newPos, this);
//    stepsAfterLastBreed++;
//}
//
//void Ant::breed(World& world)
//{
//    if(stepsAfterLastBreed < ANT_BREED_STEPS) {return;}
//    if(!world.IsAvailableAdjacent(this->GetPostion())){return;}
//    vector<Position> availableCells = world.GetAvailableAdjacent(this->GetPostion());
//    int randomDraw = rand() % availableCells.size();
//    Position newPos = availableCells[randomDraw];
//    world.placeOrganism(newPos, new Ant(world, OrganismType::ANT, newPos));
//    stepsAfterLastBreed = 0;
//}
//
//void Ant::starve(World& world) {}
//
//void Doodlebug::move(World& world)
//{
//    Position currentPos = this->GetPostion();
//    vector<Position> AdjacentCells =
//    {
//        {currentPos.xPos - 1, currentPos.yPos},//left
//        {currentPos.xPos + 1, currentPos.yPos},//right
//        {currentPos.xPos, currentPos.yPos - 1},//Down
//        {currentPos.xPos, currentPos.yPos + 1}//up
//    };
//    for(Position AdjacentCell: AdjacentCells)
//    {
//        if(AdjacentCell.xPos >= 0 && AdjacentCell.xPos < GRID_SIZE &&
//           AdjacentCell.yPos >= 0 && AdjacentCell.yPos < GRID_SIZE)
//        {
//            Organism* organismPtr = world.getOrganism(AdjacentCell);
//            if(organismPtr != nullptr &&
//               organismPtr->GetOrganismType() == OrganismType::ANT)
//            {
//                world.removeOrganism(organismPtr);
//                world.moveOrganism(currentPos, AdjacentCell, this);
//                stepsAfterLastEaten = 0;
//                stepsAfterLastBreed++;
//                return;
//            }
//        }
//    }
//    if(!world.IsAvailableAdjacent(currentPos)) {return;}
//    vector<Position> availableCells = world.GetAvailableAdjacent(currentPos);
//    int randomDraw = rand() % availableCells.size();
//    Position newPos = availableCells[randomDraw];
//    world.moveOrganism(currentPos, newPos, this);
//    stepsAfterLastEaten++;
//    stepsAfterLastBreed++;
//}
//
//
//
//void Doodlebug::breed(World& world)
//{
//    if(stepsAfterLastBreed < DOODLEBUG_BREED_STEPS) {return;}
//    if(!world.IsAvailableAdjacent(this->GetPostion())){return;}
//    vector<Position> availableCells = world.GetAvailableAdjacent(this->GetPostion());
//    int randomDraw = rand() % availableCells.size();
//    Position newPos = availableCells[randomDraw];
//    world.placeOrganism(newPos, new Doodlebug(world, OrganismType::DOODLEBUG, newPos));
//    stepsAfterLastBreed = 0;
//}
//
//void Doodlebug::starve(World& world)
//{
//    if(stepsAfterLastEaten < DOODLEBUG_STARVE_STEPS) {return;}
//    world.removeOrganism(this);
//}
//
//World:: World()
//{
//    for(int i = 0; i < GRID_SIZE; i++)
//    {
//        for(int j = 0; j < GRID_SIZE; j++)
//        {
//            grid[i][j] = nullptr;
//        }
//    }
//    addDoodlebug(NUMBER_DOODLEBUG);
//    addAnt(NUMBER_ANT);
//}
//
//World:: ~World()
//{
//    for (int i = 0; i < GRID_SIZE; ++i)
//    {
//        for (int j = 0; j < GRID_SIZE; ++j)
//        {
//            if (grid[i][j] != nullptr)
//            {
//                delete grid[i][j];
//                grid[i][j] = nullptr;
//            }
//        }
//    }
//};
//    
//
//void World:: addDoodlebug(int count)
//{
//    for(int i = 0; i < count; i++)
//    {
//        int x = rand() % GRID_SIZE;
//        int y = rand() % GRID_SIZE;
//        while(grid[x][y] != nullptr)
//        {
//            x = rand() % GRID_SIZE;
//            y = rand() % GRID_SIZE;
//        }
//        Position Pos = {x, y};
//        if(grid[x][y] == nullptr)
//        {
//            grid[x][y] = new Doodlebug(*this, OrganismType::DOODLEBUG, Pos);
//        }
//    }
//}
//void World:: addAnt(int count)
//{
//    for(int i = 0; i < count; i++)
//    {
//        int x = rand() % GRID_SIZE;
//        int y = rand() % GRID_SIZE;
//        while(grid[x][y] != nullptr)
//        {
//            x = rand() % GRID_SIZE;
//            y = rand() % GRID_SIZE;
//        }
//        Position Pos = {x, y};
//        if(grid[x][y] == nullptr)
//        {
//            grid[x][y] = new Ant(*this, OrganismType::ANT, Pos);
//        }
//    }
//}
//
//Organism* World:: getOrganism(const Position& pos) const
//{
//    if(!IsPositionEmpty(pos))
//    {
//        return grid[pos.xPos][pos.yPos];
//    } else
//    {
//        return nullptr;
//    }
//}
//
//
//void World::placeOrganism(const Position& pos, Organism* organismPtr)
//{
//    grid[pos.xPos][pos.yPos] = organismPtr;
//}
//
//
//void World:: moveOrganism(const Position& currentPos, const Position& newPos,
//                          Organism* organismPtr)
//{
//    organismPtr->SetPostion(newPos);
//    grid[newPos.xPos][newPos.yPos] = organismPtr;
//    grid[currentPos.xPos][currentPos.yPos] = nullptr;
//}
//
//void World:: removeOrganism(const Organism* organismPtr)
//{
//    Position currentPos = organismPtr->GetPostion();
//    grid[currentPos.xPos][currentPos.yPos] = nullptr;
//    delete organismPtr;
//}
//
//
//void World:: runSimulationStep()
//{
//    vector<Organism*> ants;
//    vector<Organism*> doodlebugs;
//    for(int i = 0; i < GRID_SIZE; i++)
//    {
//        for(int j = 0; j < GRID_SIZE; j++)
//        {
//            if(grid[i][j] != nullptr &&
//               grid[i][j]->GetOrganismType() == OrganismType::DOODLEBUG)
//            {
//                doodlebugs.push_back(grid[i][j]);
//            }
//        }
//    }
//    // Move doodlebugs first, then ants
//    for(Organism* doodlebug: doodlebugs)
//    {
//        doodlebug->move(*this);
//    }
//    
//    for(int i = 0; i < GRID_SIZE; i++)
//    {
//        for(int j = 0; j < GRID_SIZE; j++)
//        {
//            if(grid[i][j] != nullptr &&
//               grid[i][j]->GetOrganismType() == OrganismType::ANT)
//            {
//                ants.push_back(grid[i][j]);
//            }
//        }
//    }
//    
//    for(Organism* ant: ants)
//    {
//        ant->move(*this);
//    }
//    
//    
//    // Breed and starve where applicable
//    for(Organism* doodlebug: doodlebugs)
//    {
//        doodlebug->breed(*this);
//        doodlebug->starve(*this);
//    }
//    
//    for(Organism* ant: ants)
//    {
//        ant->breed(*this);
//    }
//    worldTime++;
//}
//void World:: display()
//{
//    cout << "World at time " << worldTime - 1 << ":" << endl;
//    
//    for(int i = 0; i < GRID_SIZE; i++)
//    {
//        for(int j = 0; j < GRID_SIZE; j++)
//        {
//            if(grid[i][j] == nullptr)
//            {
//                cout << " - ";
//            }
//            else if (grid[i][j]->GetOrganismType() == OrganismType::ANT)
//            {
//                cout << " o ";
//            }
//            else if (grid[i][j]->GetOrganismType() == OrganismType::DOODLEBUG)
//            {
//                cout << " X ";
//            }
//        }
//        cout << endl;
//    }
//}
//
//bool World:: IsPositionEmpty(const Position& currentPos) const
//{
//    return (grid[currentPos.xPos][currentPos.yPos] == nullptr);
//};
//
//
//bool World:: IsAvailableAdjacent(const Position& currentPos) const
//{
//    vector<Position> AdjacentCells =
//    {
//        {currentPos.xPos - 1, currentPos.yPos},//left
//        {currentPos.xPos + 1, currentPos.yPos},//right
//        {currentPos.xPos, currentPos.yPos - 1},//Down
//        {currentPos.xPos, currentPos.yPos + 1}//up
//    };
//    for(Position AdjacentCell: AdjacentCells)
//    {
//        if(AdjacentCell.xPos >= 0 && AdjacentCell.xPos < GRID_SIZE &&
//            AdjacentCell.yPos >= 0 && AdjacentCell.yPos < GRID_SIZE &&
//            grid[AdjacentCell.xPos][AdjacentCell.yPos] == nullptr)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//vector<Position> World:: GetAvailableAdjacent(const Position& currentPos) const
//{
//    vector<Position> AvailableAdjacentCell;
//    vector<Position> AdjacentCells =
//    {
//        {currentPos.xPos - 1, currentPos.yPos},//left
//        {currentPos.xPos + 1, currentPos.yPos},//right
//        {currentPos.xPos, currentPos.yPos - 1},//Down
//        {currentPos.xPos, currentPos.yPos + 1}//up
//    };
//    for(Position AdjacentCell: AdjacentCells)
//    {
//        if(AdjacentCell.xPos >= 0 && AdjacentCell.xPos < GRID_SIZE &&
//           AdjacentCell.yPos >= 0 && AdjacentCell.yPos < GRID_SIZE &&
//           grid[AdjacentCell.xPos][AdjacentCell.yPos] == nullptr)
//        {
//            AvailableAdjacentCell.push_back(AdjacentCell);
//        }
//    }
//    return AvailableAdjacentCell;
//}
//
//
//
//int main()
//{
//    srand(time(NULL));
//    
//    string temp;
//    World* world = new World();
//    world->runSimulationStep();
//    world->display();
//    cout << "Press ENTER to continue";
//    while(getline(cin, temp) && temp.empty())
//    {
//        world->runSimulationStep();
//        world->display();
//        cout << "Press ENTER to continue";
//    }
//    delete world;
//    return 0;
//}
