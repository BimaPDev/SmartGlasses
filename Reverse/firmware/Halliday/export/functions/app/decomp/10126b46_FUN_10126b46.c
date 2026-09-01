/* FUN_10126b46 @ 0x10126b46 */

int FUN_10126b46(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uStack_24;
  uint uStack_20;
  
  uVar5 = 0;
  iVar6 = 0;
  iVar7 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  do {
    if ((*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4 <= uVar5) {
      return iVar6;
    }
    iVar3 = *(int *)(param_1 + 0xc);
    iVar1 = iVar3 + uVar5 * 8;
    if ((-1 < (int)((uint)*(byte *)(iVar1 + 7) << 0x1e)) &&
       (uVar2 = (uint)*(ushort *)(iVar1 + 4), ((~param_2 & uVar2) == 0) != ((~param_3 & uVar2) == 0)
       )) {
      uVar4 = *(undefined4 *)(iVar3 + uVar5 * 8);
      iVar1 = FUN_1012b1e4(uVar4,0x10,&uStack_24,iVar3,iVar7);
      if ((((iVar1 != 0) ||
           (((iVar1 = FUN_1012b1e4(uVar4,0x11,&uStack_24), iVar1 != 0 ||
             (iVar1 = FUN_1012b1e4(uVar4,0x12,&uStack_24), iVar1 != 0)) ||
            (iVar1 = FUN_1012b1e4(uVar4,0x13,&uStack_24), iVar1 != 0)))) ||
          ((((iVar1 = FUN_1012b1e4(uVar4,0x15,&uStack_24), iVar1 != 0 ||
             (iVar1 = FUN_1012b1e4(uVar4,0x14,&uStack_24), iVar1 != 0)) ||
            (iVar1 = FUN_1012b1e4(uVar4,10,&uStack_24), iVar1 != 0)) ||
           (((iVar1 = FUN_1012b1e4(uVar4,0x6b,&uStack_24), iVar1 != 0 ||
             (iVar1 = FUN_1012b1e4(uVar4,0x6c,&uStack_24), iVar1 != 0)) ||
            ((((iVar1 = FUN_1012b1e4(uVar4,1,&uStack_24), iVar1 != 0 ||
               (((iVar1 = FUN_1012b1e4(uVar4,4,&uStack_24), iVar1 != 0 ||
                 (iVar1 = FUN_1012b1e4(uVar4,2,&uStack_24), iVar1 != 0)) ||
                (iVar1 = FUN_1012b1e4(uVar4,3,&uStack_24), iVar1 != 0)))) ||
              ((iVar1 = FUN_1012b1e4(uVar4,5,&uStack_24), iVar1 != 0 ||
               (iVar1 = FUN_1012b1e4(uVar4,6,&uStack_24), iVar1 != 0)))) ||
             (iVar1 = FUN_1012b1e4(uVar4,0x32,&uStack_24), iVar1 != 0)))))))) ||
         ((iVar1 = FUN_1012b1e4(uVar4,0x6e,&uStack_24), iVar1 != 0 ||
          (iVar1 = FUN_1012b1e4(uVar4,0x6d,&uStack_24), iVar1 != 0)))) {
        return 3;
      }
      iVar1 = FUN_1012b1e4(uVar4,0x69,&uStack_24);
      if ((((((iVar1 == 0) && (iVar1 = FUN_1012b1e4(uVar4,0x6a,&uStack_24), iVar1 == 0)) &&
            (iVar1 = FUN_1012b1e4(uVar4,0x6e,&uStack_24), iVar1 == 0)) &&
           ((iVar1 = FUN_1012b1e4(uVar4,0x6d,&uStack_24), iVar1 == 0 &&
            (iVar1 = FUN_1012b1e4(uVar4,0x37,&uStack_24), iVar1 == 0)))) &&
          ((iVar1 = FUN_1012b1e4(uVar4,0x38,&uStack_24), iVar1 == 0 &&
           ((iVar1 = FUN_1012b1e4(uVar4,0x35,&uStack_24), iVar1 == 0 &&
            (iVar1 = FUN_1012b1e4(uVar4,0x40,&uStack_24), iVar1 == 0)))))) &&
         ((iVar1 = FUN_1012b1e4(uVar4,0x45,&uStack_24), iVar1 == 0 &&
          ((((iVar1 = FUN_1012b1e4(uVar4,0x41,&uStack_24), iVar1 == 0 &&
             (iVar1 = FUN_1012b1e4(uVar4,0x42,&uStack_24), iVar1 == 0)) &&
            (iVar1 = FUN_1012b1e4(uVar4,0x43,&uStack_24), iVar1 == 0)) &&
           (iVar1 = FUN_1012b1e4(uVar4,0x49,&uStack_24), iVar1 == 0)))))) {
        if (iVar6 == 0) {
          iVar6 = 1;
        }
      }
      else {
        iVar6 = 2;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

