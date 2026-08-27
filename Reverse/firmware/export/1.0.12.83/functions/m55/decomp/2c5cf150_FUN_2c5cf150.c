/* FUN_2c5cf150 @ 0x2c5cf150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cf150(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  char cVar8;
  
  piVar1 = _DAT_2c5cf218;
  if (param_2 == 0) {
    FUN_2c5cec20(param_3,0x1047);
    uVar6 = 1;
    *(undefined1 *)(param_3 + 0x78) = 1;
  }
  else {
    if (param_2 == 1) {
      iVar7 = 0;
      iVar5 = *_DAT_2c5cf218;
      *(undefined1 *)(param_3 + 0x78) = 0;
      uVar4 = _LAB_2c5cf22c;
      uVar3 = _LAB_2c5cf224;
      uVar2 = _LAB_2c5cf220;
      if (iVar5 != 0x1047) {
        if (piVar1[1] == 0x1047) {
          iVar7 = 1;
        }
        else {
          if (piVar1[2] != 0x1047) {
            iVar7 = func_0x2c5cf0d4(param_3);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,_LAB_2c5cf224,0x2b7,_LAB_2c5cf220,_LAB_2c5cf228);
            }
            uVar6 = *(undefined1 *)(param_3 + 0x78);
            goto LAB_2c5cf196;
          }
          iVar7 = 2;
        }
      }
      cVar8 = *(char *)(param_3 + iVar7 + 0xc) + '\x01';
      *(char *)(param_3 + iVar7 + 0xc) = cVar8;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,uVar3,0x2ae,uVar2,uVar4,iVar7,cVar8);
    }
    uVar6 = 0;
    *(undefined1 *)(param_3 + 0x78) = 0;
    *(undefined1 *)(param_3 + 0x80) = 0;
  }
LAB_2c5cf196:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cf224,0x2bf,_LAB_2c5cf220,_LAB_2c5cf21c,param_2,uVar6);
}

