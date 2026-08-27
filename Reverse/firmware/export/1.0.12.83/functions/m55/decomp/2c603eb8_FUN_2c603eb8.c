/* FUN_2c603eb8 @ 0x2c603eb8 */

uint FUN_2c603eb8(int param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_28 [4];
  int local_24;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x22);
  uVar6 = (uVar2 & 0x1ff) >> 3;
  local_24 = *DAT_2c604138;
  if ((*(ushort *)(param_1 + 0x22) & 0x1f8) != 0) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0xc) + uVar5 * 8;
      if (((*(byte *)(iVar3 + 7) & 2) == 0) &&
         (uVar1 = *(ushort *)(iVar3 + 4), ((~param_2 & uVar1) == 0) != ((~param_3 & uVar1) == 0))) {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar5 * 8);
        iVar3 = FUN_2c62b108(uVar4,0x10,auStack_28);
        if ((((iVar3 != 0) ||
             (((iVar3 = FUN_2c62b108(uVar4,0x11,auStack_28), iVar3 != 0 ||
               (iVar3 = FUN_2c62b108(uVar4,0x12,auStack_28), iVar3 != 0)) ||
              (iVar3 = FUN_2c62b108(uVar4,0x13,auStack_28), iVar3 != 0)))) ||
            ((((iVar3 = FUN_2c62b108(uVar4,0x15,auStack_28), iVar3 != 0 ||
               (iVar3 = FUN_2c62b108(uVar4,0x14,auStack_28), iVar3 != 0)) ||
              (iVar3 = FUN_2c62b108(uVar4,10,auStack_28), iVar3 != 0)) ||
             (((iVar3 = FUN_2c62b108(uVar4,0x6a,auStack_28), iVar3 != 0 ||
               (iVar3 = FUN_2c62b108(uVar4,0x6b,auStack_28), iVar3 != 0)) ||
              ((((iVar3 = FUN_2c62b108(uVar4,1,auStack_28), iVar3 != 0 ||
                 (((iVar3 = FUN_2c62b108(uVar4,4,auStack_28), iVar3 != 0 ||
                   (iVar3 = FUN_2c62b108(uVar4,2,auStack_28), iVar3 != 0)) ||
                  (iVar3 = FUN_2c62b108(uVar4,3,auStack_28), iVar3 != 0)))) ||
                ((iVar3 = FUN_2c62b108(uVar4,5,auStack_28), iVar3 != 0 ||
                 (iVar3 = FUN_2c62b108(uVar4,6,auStack_28), iVar3 != 0)))) ||
               (iVar3 = FUN_2c62b108(uVar4,0x32,auStack_28), iVar3 != 0)))))))) ||
           ((iVar3 = FUN_2c62b108(uVar4,0x6d,auStack_28), iVar3 != 0 ||
            (iVar3 = FUN_2c62b108(uVar4,0x6c,auStack_28), iVar3 != 0)))) {
          uVar6 = 3;
          break;
        }
        iVar3 = FUN_2c62b108(uVar4,0x68,auStack_28);
        if ((((((iVar3 == 0) && (iVar3 = FUN_2c62b108(uVar4,0x69,auStack_28), iVar3 == 0)) &&
              (iVar3 = FUN_2c62b108(uVar4,0x6d,auStack_28), iVar3 == 0)) &&
             ((iVar3 = FUN_2c62b108(uVar4,0x6c,auStack_28), iVar3 == 0 &&
              (iVar3 = FUN_2c62b108(uVar4,0x37,auStack_28), iVar3 == 0)))) &&
            ((iVar3 = FUN_2c62b108(uVar4,0x38,auStack_28), iVar3 == 0 &&
             ((iVar3 = FUN_2c62b108(uVar4,0x35,auStack_28), iVar3 == 0 &&
              (iVar3 = FUN_2c62b108(uVar4,0x40,auStack_28), iVar3 == 0)))))) &&
           ((iVar3 = FUN_2c62b108(uVar4,0x45,auStack_28), iVar3 == 0 &&
            ((((iVar3 = FUN_2c62b108(uVar4,0x41,auStack_28), iVar3 == 0 &&
               (iVar3 = FUN_2c62b108(uVar4,0x42,auStack_28), iVar3 == 0)) &&
              (iVar3 = FUN_2c62b108(uVar4,0x43,auStack_28), iVar3 == 0)) &&
             (iVar3 = FUN_2c62b108(uVar4,0x49,auStack_28), iVar3 == 0)))))) {
          uVar2 = (uint)*(ushort *)(param_1 + 0x22);
          if (uVar6 == 0) {
            uVar6 = 1;
          }
        }
        else {
          uVar6 = 2;
          uVar2 = (uint)*(ushort *)(param_1 + 0x22);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uVar2 & 0x1ff) >> 3);
  }
  if (*DAT_2c604138 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar6;
}

