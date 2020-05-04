#pragma once
#include "Rental.h"
#include "Auto.h"
#include "Kunde.h"
#include "AutoInMemoryRepository.h"
class AutoController
{
public:
    static AutoController& GetInstance()
    {
        static AutoController    instance; // Guaranteed to be destroyed.
                              // Instantiated on first use.
        return instance;
    }
    Auto findOne(int id) { return repo.findOne(id); }

     std::vector<Auto> findAll() { return repo.findAll(); }

        Auto save(Auto entity) { return repo.save(entity); }

        Auto update(Auto entity) { return repo.update(entity); }

     Auto del(Auto entity) { return repo.del(entity); }

     void sort_autos();
private:
    AutoInMemoryRepository repo;
    AutoController() {}                    


    AutoController(AutoController const&) = delete;              
    void operator=(AutoController const&) = delete; 

};

