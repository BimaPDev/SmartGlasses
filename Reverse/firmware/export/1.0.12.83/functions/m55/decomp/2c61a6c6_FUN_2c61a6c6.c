/* FUN_2c61a6c6 @ 0x2c61a6c6 */

int * FUN_2c61a6c6(int *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return param_1;
  }
  iVar4 = *param_1;
  if ((iVar4 == 0) || ((int)((uint)*(byte *)(param_1 + 4) << 0x1f) < 0)) {
    iVar4 = FUN_2c66c4ec(param_2);
    iVar4 = lv_mem_alloc(iVar4 + 1);
    *param_1 = iVar4;
  }
  else {
    iVar3 = FUN_2c66c4ec(param_2);
    iVar4 = FUN_2c62bebc(iVar4,iVar3 + 1);
    *param_1 = iVar4;
  }
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  FUN_2c6435c4(iVar4,param_2);
  iVar4 = param_1[1];
  *(byte *)(iVar4 + 0x3c) = *(byte *)(iVar4 + 0x3c) | 8;
  FUN_2c607df0(iVar4);
  sVar1 = FUN_2c6033b4(iVar4,0,1);
  sVar2 = FUN_2c6033b4(iVar4,0,4);
  if ((sVar1 != 0x27d1) && (sVar2 != 0x27d1)) {
    return (int *)0x0;
  }
  *(byte *)(iVar4 + 0x22) = *(byte *)(iVar4 + 0x22) | 1;
  iVar4 = FUN_2c604178(iVar4);
  *(byte *)(iVar4 + 0x22) = *(byte *)(iVar4 + 0x22) | 2;
  iVar4 = FUN_2c604188();
  if (*(int *)(iVar4 + 4) != 0) {
    FUN_2c62be4c();
    return (int *)0x1;
  }
  return (int *)0x1;
}

