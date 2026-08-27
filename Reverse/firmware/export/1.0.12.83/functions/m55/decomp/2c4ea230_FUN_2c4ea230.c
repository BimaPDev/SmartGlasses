/* FUN_2c4ea230 @ 0x2c4ea230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ea230(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4ea2fc;
  uVar3 = 0;
  if (iVar2 == 0) goto LAB_2c4ea28e;
  switch(param_1) {
  case 1:
    uVar3 = FUN_2c674268(*_LAB_2c4ea2fc + 0x14c,0,0xa8);
    if (0xa8 < param_3) goto LAB_2c4ea2b4;
    goto LAB_2c4ea26c;
  case 2:
    uVar4 = 0x30;
    iVar2 = *_LAB_2c4ea2fc + 500;
    break;
  case 3:
    uVar4 = 0x24;
    iVar2 = *_LAB_2c4ea2fc + 0x224;
    break;
  case 4:
    uVar4 = 0x24;
    iVar2 = *_LAB_2c4ea2fc + 0x248;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    TRACE(1,0x194,_LAB_2c4ea30c,_LAB_2c4ea308,_LAB_2c4ea310,param_1);
  }
  uVar3 = FUN_2c674268(iVar2,0,uVar4);
  if (uVar4 < param_3) {
LAB_2c4ea2b4:
                    /* WARNING: Subroutine does not return */
    TRACE(1,0x19a,_LAB_2c4ea30c,_LAB_2c4ea308,_LAB_2c4ea304,param_3);
  }
LAB_2c4ea26c:
  FUN_2c674668(uVar3,param_2,param_3);
  iVar2 = *piVar1;
  uVar3 = func_0x2c4c2878(0,iVar2 + 0x14c,0x15c);
  *(undefined4 *)(iVar2 + 0x148) = uVar3;
  uVar3 = FUN_2c4e9738();
LAB_2c4ea28e:
  FUN_2c644080(*_LAB_2c4ea300);
  return uVar3;
}

