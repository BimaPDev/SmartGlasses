/* FUN_1011d2d4 @ 0x1011d2d4 */

void FUN_1011d2d4(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  
  iVar1 = param_3 + 3;
  if (iVar1 < 0) {
    iVar1 = param_3 + 6;
  }
  iVar1 = FUN_1011c88e(param_1,(iVar1 << 0x16) >> 0x18,param_3,param_4,param_4);
  cVar5 = '\0';
  while( true ) {
    iVar3 = (int)cVar5;
    cVar5 = cVar5 + '\x01';
    if (param_3 <= iVar3) break;
    uVar4 = (param_3 + -1) - iVar3;
    uVar2 = uVar4 & 0xfffffffc;
    *(uint *)(iVar1 + uVar2) =
         *(uint *)(iVar1 + uVar2) | (uint)*(byte *)(param_2 + iVar3) << ((uVar4 & 3) << 3);
  }
  return;
}

