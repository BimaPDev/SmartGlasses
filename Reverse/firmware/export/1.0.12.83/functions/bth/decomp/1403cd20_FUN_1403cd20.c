/* FUN_1403cd20 @ 0x1403cd20 */

uint FUN_1403cd20(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  switch(param_1) {
  case 1:
    uVar1 = FUN_1404b24c();
    return uVar1;
  case 2:
    uVar1 = FUN_14095748();
    return uVar1;
  case 3:
    uVar1 = FUN_140956f8();
    return uVar1;
  case 4:
    iVar2 = FUN_14095748();
    iVar3 = FUN_140956f8();
    return iVar3 + iVar2 & 0xff;
  case 5:
    uVar1 = FUN_14051668();
    return uVar1;
  case 6:
    uVar1 = FUN_1405162c();
    return uVar1;
  case 7:
    uVar1 = FUN_14051640();
    return uVar1;
  default:
    return 0;
  }
}

