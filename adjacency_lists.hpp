#pragma once

#include <vector>

namespace graph
{
    template<typename T>
    class adjacency_lists
    {
    public:
        using value_type = T;
    
    private:
        std::vector<std::vector<T*>> lists_;
    };
}