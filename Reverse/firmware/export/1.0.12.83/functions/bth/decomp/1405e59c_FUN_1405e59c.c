/* FUN_1405e59c @ 0x1405e59c */

void FUN_1405e59c(undefined2 param_1,int param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined2 *)FUN_14074378(0xd1b,param_1,4);
    if (puVar2 == (undefined2 *)0x0) {
      param_2 = 0x4b;
    }
    else {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      FUN_140743d0(puVar2,param_1);
    }
  }
  puVar1 = (undefined1 *)FUN_14074378(0xd00,param_1,4,6);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *(short *)(puVar1 + 2) = (short)param_2;
  *puVar1 = 0x1b;
  puVar1[4] = 0xff;
  FUN_140743d0();
  return;
}

