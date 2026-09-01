/* FUN_1011c28c @ 0x1011c28c */

uint FUN_1011c28c(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 extraout_r1;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  piVar4 = *(int **)(pbVar5 + 4);
  thunk_FUN_10113cfc(pbVar5 + 0x28,param_2,0xffffffff,0xffffffff);
  pbVar2 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar2;
  uVar3 = bVar1 & 4;
  if ((bVar1 & 4) == 0) {
    *pbVar2 = bVar1 & 0xfb;
  }
  else {
    param_2 = param_2 | (int)param_2 >> 0x1f;
    uVar3 = FUN_1011401c(pbVar2 + 0x10,extraout_r1,param_2,(int)param_2 >> 0x1f);
  }
  if ((*piVar4 + 0xf0000000U < 0x4000000) && ((int)((uint)*pbVar5 << 0x1e) < 0)) {
    FUN_1006edf0();
    *pbVar5 = *pbVar5 & 0xfd;
  }
  thunk_FUN_10113e2c(pbVar5 + 0x28);
  return uVar3;
}

