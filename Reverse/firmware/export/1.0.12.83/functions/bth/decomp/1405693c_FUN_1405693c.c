/* FUN_1405693c @ 0x1405693c */

void FUN_1405693c(int param_1,undefined2 param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  
  if ((param_3 == 0) &&
     (puVar1 = (undefined1 *)FUN_14074378(0xe15,param_2,3,6), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = (char)param_1;
    *(undefined4 *)(puVar1 + 1) = *param_4;
    puVar1[5] = *(undefined1 *)(param_4 + 1);
    FUN_140743d0(puVar1,param_2);
  }
  puVar1 = (undefined1 *)FUN_14074378(0xe00,param_2,param_1 << 8 | 3,4);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *puVar1 = (char)param_1;
  *(short *)(puVar1 + 2) = (short)param_3;
  puVar1[1] = 0x16;
  FUN_140743d0();
  return;
}

