#include <list>
#include <string>

/**
 * @brief Stack with custom values
 *
 * TODO: Detailed description
 */

template <typename T> class Stack {
private:
    std::list<T> storage;
    unsigned int stackSize = 0;
public:

    /**
     * @brief Pushes an element to a stack
     * @param element - an element to be added
     */
    void push(T element){
        try{
            storage.push_back(element);
            ++stackSize;
        } catch(std::bad_alloc){
            throw "Memory allocation error!";
        }
    }
   /**
    * @brief Removes an element from the end of a stack
    */
    void pop(){
        try{
            storage.pop_back();
            --stackSize;
        } catch (std::bad_alloc){
            throw "Can't pop an empty stack!";
        }
    }
    /**
     * @brief Returns an element from the end of a stack
     * @return Last element
     */
    T getElement(){
        return *storage.rbegin();
    }
    /**
     * @brief Returns the size of a stack
     * @return Size of a stack
     */
    unsigned int size() const {
        return stackSize;
    }
    /**
     * @brief Clears the whole stack
     */
    void clear(){
        storage.clear();
        stackSize = 0;
    }
};
