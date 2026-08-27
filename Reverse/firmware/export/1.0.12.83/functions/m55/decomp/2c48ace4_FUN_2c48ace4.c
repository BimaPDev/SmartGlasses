/* FUN_2c48ace4 @ 0x2c48ace4 */

undefined4 FUN_2c48ace4(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_1[1];
  if (param_3 <= uVar2) {
    uVar3 = param_1[2];
    uVar5 = uVar2 - uVar3;
    if (uVar5 < param_3) {
      FUN_2c674668(param_2,*param_1 + (uVar3 & 0xfffffffe),uVar5);
      param_1[2] = (param_3 - uVar2) + uVar3;
      FUN_2c674668(param_2 + uVar5,*param_1);
      return 0;
    }
    FUN_2c674668(param_2,*param_1 + (uVar3 & 0xfffffffe));
    param_1[2] = param_1[2] + param_3;
    return 0;
  }
  iVar4 = 0;
  uVar3 = param_1[2];
  iVar1 = param_2;
  if (uVar3 != 0) goto LAB_2c48ad24;
  do {
    if (param_3 <= uVar2) {
      FUN_2c674668(param_2 + iVar4,*param_1,param_3);
      param_1[2] = param_3;
      return 0;
    }
    FUN_2c674668(iVar1,*param_1,uVar2);
    param_3 = param_3 - param_1[1];
    iVar4 = iVar4 + param_1[1];
    while( true ) {
      if (param_3 == 0) {
        return 0;
      }
      uVar2 = param_1[1];
      iVar1 = param_2 + iVar4;
      uVar3 = param_1[2];
      if (uVar3 == 0) break;
LAB_2c48ad24:
      iVar4 = uVar2 - uVar3;
      param_3 = (param_3 + uVar3) - uVar2;
      FUN_2c674668(param_2,(uVar3 & 0xfffffffe) + *param_1,iVar4);
      param_1[2] = 0;
    }
  } while( true );
}

