/* FUN_1405e970 @ 0x1405e970 */

void FUN_1405e970(undefined2 param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined1 *)FUN_14074378(0xd15,param_1,4);
    if (puVar1 == (undefined1 *)0x0) {
      param_2 = 0x4b;
    }
    else {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
      puVar1[3] = param_3[3];
      FUN_140743d0(puVar1,param_1);
    }
  }
  puVar1 = (undefined1 *)FUN_14074378(0xd00,param_1,4,6);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *(short *)(puVar1 + 2) = (short)param_2;
  *puVar1 = 0x14;
  puVar1[4] = 0xff;
  FUN_140743d0();
  return;
}

