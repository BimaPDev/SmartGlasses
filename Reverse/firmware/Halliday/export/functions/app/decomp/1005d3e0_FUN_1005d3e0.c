/* FUN_1005d3e0 @ 0x1005d3e0 */

void FUN_1005d3e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_1005d264;
  if (param_1 != 0) {
    *DAT_1005d264 = 0;
    FUN_1011ea48(0x31000000,0,0x400,param_4,param_4);
    *DAT_1005d268 = 0;
    *puVar1 = DAT_1005d26c;
    return;
  }
  *DAT_1005d3ec = 0;
  return;
}

