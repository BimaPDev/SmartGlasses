/* FUN_1011dd4a @ 0x1011dd4a */

undefined4 FUN_1011dd4a(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_10 = 0;
  local_c = 0;
  if (((param_2 & 0xfffffffd) == 0) &&
     (uStack_8 = param_3, FUN_1011dcde(*(undefined4 *)(param_1 + 0xc),3,&local_10), local_c != 0)) {
    return *(undefined4 *)(local_c + 0x38);
  }
  return 0;
}

