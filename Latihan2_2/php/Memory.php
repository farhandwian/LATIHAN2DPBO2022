<?php

// class Memory adalah child dari class Hardware
class Memory extends Hardware
{
    private $freq = "";
    private $mSize = "";
    private $sCuda = "";

    //constructor
    function __construct(){
    }

    // set memory freq
    function set_freq($freq)
    {
        $this->freq = $freq;
    }
    // get memory freq
    function get_freq()
    {
        return $this->freq;
    }

    // set memory mSize
    function set_mSize($mSize)
    {
        $this->mSize = $mSize;
    }
    // get memory mSize
    function get_mSize()
    {
        return $this->mSize;
    }

    // set memory sCuda
    function set_sCuda($sCuda)
    {
        $this->sCuda = $sCuda;
    }
    // get memory sCuda
    function get_sCuda()
    {
        return $this->sCuda;
    }

    // destructor
    function __destruct(){
    }
}

?>