float inc=0.1;
    int precision=3;
    for (int i = 0; i < precision; i++)
    {
        while (ans*ans<n)
        {
            ans=ans+inc;
        }
        ans-=inc;
        inc=inc/10;
    }