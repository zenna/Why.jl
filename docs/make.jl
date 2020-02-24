using Documenter, Why

makedocs(;
    modules=[Why],
    format=Documenter.HTML(),
    pages=[
        "Home" => "index.md",
    ],
    repo="https://github.com/zenna/Why.jl/blob/{commit}{path}#L{line}",
    sitename="Why.jl",
    authors="Zenna Tavares",
    assets=String[],
)

deploydocs(;
    repo="github.com/zenna/Why.jl",
)
