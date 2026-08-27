/* FUN_1405e53c @ 0x1405e53c */

void FUN_1405e53c(undefined2 param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined1 *)FUN_14074378(0xd1a,param_1,4,2);
    if (puVar1 == (undefined1 *)0x0) {
      param_2 = 0x4b;
    }
    else {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      FUN_140743d0(puVar1,param_1);
    }
  }
  puVar1 = (undefined1 *)FUN_14074378(0xd00,param_1,4,6);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *(short *)(puVar1 + 2) = (short)param_2;
  *puVar1 = 0x1a;
  puVar1[4] = 0xff;
  FUN_140743d0();
  return;
}

