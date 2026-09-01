/* FUN_1012dd38 @ 0x1012dd38 */

int FUN_1012dd38(undefined4 *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar3 = 0;
  uVar1 = param_2;
  iVar5 = param_3;
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    if ((uVar1 + uVar3 & 0xfff) == 0) {
      uVar1 = uVar1 + 0xc;
    }
    uVar2 = 0x1000 - (uVar1 & 0xfff);
    if (param_4 <= uVar2) {
      uVar2 = param_4;
    }
    uVar4 = FUN_1012ddbc(*param_1,param_2,uVar3 + uVar1,0,(uVar3 & 0xfffffffc) + param_3,uVar2,iVar5
                        );
    param_2 = (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) break;
    uVar3 = uVar3 + uVar2;
    param_4 = param_4 - uVar2;
  }
  return (int)uVar4;
}

