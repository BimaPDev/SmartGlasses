/* FUN_1011c208 @ 0x1011c208 */

uint FUN_1011c208(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  thunk_FUN_10113cfc(pbVar3 + 0x28,param_2,0xffffffff,0xffffffff);
  bVar1 = *pbVar3;
  uVar2 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    *pbVar3 = bVar1 | 1;
  }
  else {
    uVar2 = 0xfffffff0;
  }
  thunk_FUN_10113e2c(pbVar3 + 0x28);
  FUN_1013ca1a(pbVar3 + 0x10,0,1);
  FUN_10055b54(0xd);
  FUN_10055be0(0xd);
  FUN_10055b98(0xd);
  return uVar2;
}

