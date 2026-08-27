/* FUN_2c140be8 @ 0x2c140be8 */

undefined4 FUN_2c140be8(undefined1 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_2c140be0;
  if ((*(char *)(DAT_2c140bfc + 8) != '\x02') || (*(int *)(DAT_2c140bfc + 0x24) == 0)) {
    return 0;
  }
  iVar6 = *(int *)(DAT_2c140be0 + 0x14);
  FUN_2c13ee20(iVar6);
  *(undefined1 *)(iVar6 + 1) = param_1;
  if (param_2 == 0xffffffff) {
    iVar5 = *(int *)(iVar1 + 0x30);
    if (*(int *)(iVar1 + 0x30) == 0) {
      *(undefined4 *)(iVar6 + 0x10) = 0;
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x1c) = 0xffffffff;
      *(int *)(iVar1 + 0x30) = iVar6;
    }
    else {
      do {
        iVar4 = iVar5;
        iVar5 = *(int *)(iVar4 + 0x10);
      } while (*(int *)(iVar4 + 0x10) != 0);
      *(undefined4 *)(iVar6 + 0x10) = 0;
      *(int *)(iVar6 + 0x14) = iVar4;
      *(undefined4 *)(iVar6 + 0x1c) = 0xffffffff;
      *(int *)(iVar4 + 0x10) = iVar6;
    }
  }
  else {
    iVar5 = 0;
    iVar4 = *(int *)(iVar1 + 0x2c);
    if (*(int *)(iVar1 + 0x2c) == 0) {
      *(undefined4 *)(iVar6 + 0x10) = 0;
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *(uint *)(iVar6 + 0x1c) = param_2;
      *(int *)(iVar1 + 0x2c) = iVar6;
    }
    else {
      do {
        iVar3 = iVar4;
        if (param_2 < *(uint *)(iVar3 + 0x1c)) {
          *(int *)(iVar6 + 0x10) = iVar3;
          *(int *)(iVar6 + 0x14) = iVar5;
          *(uint *)(iVar6 + 0x1c) = param_2;
          if (iVar5 == 0) {
            *(int *)(iVar1 + 0x2c) = iVar6;
          }
          else {
            *(int *)(iVar5 + 0x10) = iVar6;
          }
          *(int *)(iVar3 + 0x14) = iVar6;
          *(uint *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) - param_2;
          goto LAB_2c140b7c;
        }
        param_2 = param_2 - *(uint *)(iVar3 + 0x1c);
        iVar5 = iVar3;
        iVar4 = *(int *)(iVar3 + 0x10);
      } while (*(int *)(iVar3 + 0x10) != 0);
      *(undefined4 *)(iVar6 + 0x10) = 0;
      *(int *)(iVar6 + 0x14) = iVar3;
      *(uint *)(iVar6 + 0x1c) = param_2;
      *(int *)(iVar3 + 0x10) = iVar6;
    }
  }
LAB_2c140b7c:
  iVar5 = *(int *)(iVar1 + 0x24);
  iVar6 = *(int *)(iVar5 + 8);
  *(int *)(iVar1 + 0x24) = iVar6;
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0xc) = DAT_2c140be4;
  }
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined1 *)(iVar5 + 1) = 2;
  iVar6 = *(int *)(iVar1 + 0x14);
  *(int *)(iVar1 + 0x18) = iVar5;
  if (iVar5 != iVar6) {
    if (iVar6 != 0) {
      uVar2 = FUN_2c14486c();
      *(undefined4 *)(iVar6 + 0x48) = uVar2;
    }
    uVar2 = FUN_2c14486c();
    *(undefined4 *)(iVar5 + 0x44) = uVar2;
  }
  FUN_2c140ac8();
  FUN_2c13ee2c(iVar5);
  return 1;
}

