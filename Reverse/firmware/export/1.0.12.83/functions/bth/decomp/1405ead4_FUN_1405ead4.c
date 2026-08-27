/* FUN_1405ead4 @ 0x1405ead4 */

void FUN_1405ead4(undefined2 param_1,int param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined2 *)FUN_14074378(0xd17,param_1,4,8);
    if (puVar2 == (undefined2 *)0x0) {
      param_2 = 0x4b;
    }
    else {
      puVar2[2] = param_3[2];
      puVar2[3] = param_3[3];
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
  *puVar1 = 0x17;
  puVar1[4] = 0xff;
  FUN_140743d0();
  return;
}

