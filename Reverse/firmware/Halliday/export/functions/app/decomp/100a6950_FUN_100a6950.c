/* FUN_100a6950 @ 0x100a6950 */

undefined4 FUN_100a6950(undefined4 param_1,uint param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_1012ddbc(param_1,param_2,param_2 & 0xfffff000,0,&local_14,0xc);
  if ((iVar1 == 0) && (local_14 == DAT_100a69ac)) {
    if (local_10 == -1) {
      if (local_c == -1) {
        return 0;
      }
      return 3;
    }
    if (local_10 == -0x1010102) {
      if (local_c == -1) {
        return 1;
      }
      if (local_c == -0x3030304) {
        return 2;
      }
      return 3;
    }
  }
  return 3;
}

