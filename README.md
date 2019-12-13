# dp_rod_cutting

Calculate maximum profit each cut using dynamic programming

<img src="https://latex.codecogs.com/gif.latex?f(0)&space;=&space;0" title="f(0) = 0" />
<img src="http://www.sciweavers.org/tex2img.php?eq=f%28x%29%20%3D%20max%28f%28x-1%29%2Bv_1%2C%20f%28x-2%29%2Bv_2%2C%20...%2C%20f%28x-n%29%2Bv_n%29&bc=White&fc=Black&im=jpg&fs=12&ff=mathptmx&edit=0" align="center" border="0" alt="f(x) = max(f(x-1)+v_1, f(x-2)+v_2, ..., f(x-n)+v_n)" width="390" height="19" />

where
<img src="http://www.sciweavers.org/tex2img.php?eq=x%20-%20i%20%20%5Cgeq%200&bc=White&fc=Black&im=jpg&fs=12&ff=mathptmx&edit=0" align="center" border="0" alt="x - i  \geq 0" width="61" height="17" />

<img src="http://www.sciweavers.org/tex2img.php?eq=Time%20Complexity%20%3A%20O%28NM%29&bc=White&fc=Black&im=jpg&fs=12&ff=mathptmx&edit=0" align="center" border="0" alt="Time Complexity : O(NM)" width="178" height="19" />

where N is the length of rod <br>
and M is the size of collection of prices in each cut
