/* FUN_140836dc @ 0x140836dc */

void FUN_140836dc(int param_1,uint param_2)

{
  int *piVar1;
  uint3 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40 [3];
  int *local_34;
  uint local_30;
  undefined4 local_2c;
  
  local_2c = *DAT_140838c4;
  uVar4 = FUN_1408ad70();
  uVar3 = DAT_140838e4;
  piVar1 = DAT_140838c8;
  if (DAT_140838c8[3] == -1) {
    uVar7 = 1;
    while( true ) {
      local_40[1] = 0;
      local_40[2] = 0;
      local_34 = (int *)0x0;
      local_30 = 0;
      local_40[0] = uVar7;
      FUN_1408ad10(1,uVar3,local_40);
      if (local_30 == 0) break;
      bVar9 = uVar7 == 0xfffffffe;
      uVar7 = uVar7 + 1;
      if (bVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_140838cc);
      }
    }
  }
  else {
    uVar7 = DAT_140838c8[3] + 1;
    DAT_140838c8[3] = uVar7;
  }
  piVar6 = (int *)*piVar1;
  local_4c = 0;
  local_44 = 0;
  uVar2 = CONCAT21((short)param_2,(char)uVar4);
  local_50 = (uint)uVar2 << 8;
  local_48 = uVar7;
  if (piVar6 != piVar1) {
    iVar5 = 0x3ea;
    do {
      if (param_2 >> 1 == (uint)*(ushort *)(piVar6 + 2)) {
        if ((char)piVar6[8] != '\0') {
          piVar1 = (int *)(param_1 + 0xc);
          piVar8 = (int *)*piVar1;
          if (piVar8 != piVar1) {
            iVar5 = 0x3ea;
            do {
              if ((uint)*(ushort *)piVar8[10] == (uint)*(ushort *)(piVar6 + 2)) {
                    /* WARNING: Subroutine does not return */
                FUN_1402a64c(0x44,DAT_140838d4,uVar4,param_2 >> 1,(char)piVar8[0xd],
                             *(undefined1 *)((int)piVar8 + 0x19));
              }
              iVar5 = iVar5 + -1;
              piVar8 = (int *)*piVar8;
              if (iVar5 == 0) {
LAB_14083890:
                    /* WARNING: Subroutine does not return */
                FUN_14082394();
              }
            } while (piVar8 != piVar1);
          }
          if ((code *)piVar6[7] != (code *)0x0) {
            local_50 = (uint)uVar2 << 8;
            local_4c = (uint)*(ushort *)(piVar6 + 2);
            iVar5 = (*(code *)piVar6[7])(param_1 + 6,0x1c04,&local_50);
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x44,DAT_140838d8,uVar4,piVar6[7],(short)piVar6[2],iVar5 != 0);
          }
          uVar7 = (uint)*(byte *)((int)piVar6 + 10);
          if (uVar7 == 0) {
            local_40[1] = 2;
            local_40[0] = uVar7;
            local_40[2] = param_1;
            local_34 = piVar6 + 2;
            local_30 = uVar7;
            FUN_1408ad10(1,DAT_140838e4,local_40);
            uVar7 = (uint)*(byte *)((int)piVar6 + 10);
            bVar9 = local_30 == 0;
          }
          else {
            bVar9 = true;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x44,DAT_140838e0,uVar4,(short)piVar6[2],uVar7,bVar9);
        }
        break;
      }
      iVar5 = iVar5 + -1;
      piVar6 = (int *)*piVar6;
      if (iVar5 == 0) goto LAB_14083890;
    } while (piVar6 != piVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_140838d0,uVar4);
}

