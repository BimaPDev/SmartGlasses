/* FUN_140313b0 @ 0x140313b0 */

void FUN_140313b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_1403140c;
  uVar4 = DAT_14031408;
  piVar3 = DAT_14031404;
  uVar2 = DAT_14031400;
  uVar1 = DAT_140313fc;
  *DAT_14031404 = 0;
  FUN_1402a6e8(4,0x73,uVar5,uVar4,uVar2,uVar1);
  FUN_1402a9fc(DAT_14031410,1,param_2,param_1);
  FUN_14026af8(0,0,param_1,param_2);
  if (*DAT_14031414 == '\0') {
    do {
    } while (*piVar3 == 0);
  }
  return;
}

