/* FUN_2c64b1a6 @ 0x2c64b1a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64b1a6(uint param_1,undefined4 param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int unaff_r7;
  int unaff_r8;
  uint uVar8;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  uVar5 = param_1;
  do {
    FUN_2c6741e8(param_1,param_2,param_3,param_4,uVar5);
    do {
      while( true ) {
        while( true ) {
          uVar2 = FUN_2c66b19c();
          uVar5 = uVar2 & 1;
          if ((int)uVar2 < 0) {
            uVar5 = -uVar5;
          }
          uVar3 = FUN_2c66b19c();
          uVar2 = uVar3 & 0x3fff;
          iVar7 = *(int *)(unaff_r8 + uVar5 * 4);
          iVar6 = *(int *)(unaff_r7 + uVar5 * 4);
          if (-1 < (int)-uVar3) {
            uVar2 = -(uVar3 * -0x40000 >> 0x12);
          }
          iVar4 = FUN_2c66b19c();
          uVar2 = uVar2 & 0xfffffffc;
          param_3 = uVar2 + iVar7;
          param_4 = (uint *)(param_3 + 0x4000);
          if (-1 < iVar4 << 0x1f) break;
          uVar1 = FUN_2c66b19c();
          uVar5 = (uint)uVar1 | ~(uint)uVar1 << 0x10;
          *(uint *)(uVar2 + iVar7) = uVar5;
          *param_4 = uVar5;
          *(uint *)(uVar2 + iVar6) = uVar5;
          DataSynchronizationBarrier(0xf);
        }
        uVar5 = *(uint *)(uVar2 + iVar7);
        uVar8 = *param_4;
        uVar3 = *(uint *)(uVar2 + iVar6);
        iVar6 = FUN_2c673c88();
        uVar2 = FUN_2c6741d8(iVar6 - in_stack_00000010);
        if (in_stack_00000014 <= uVar2) {
          if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x88,_LAB_2c64b230,_LAB_2c64b22c,_LAB_2c64b248,in_stack_00000018);
          }
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x8a,_LAB_2c64b230,_LAB_2c64b22c,_LAB_2c64b250);
        }
        if (((uVar5 != uVar8) || (uVar5 != uVar3)) || ((uVar5 & 0xffff) != ~uVar5 >> 0x10)) break;
        if (7999 < (uint)(iVar6 - in_stack_0000001c)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x79,_LAB_2c64b230,_LAB_2c64b22c,_LAB_2c64b24c,param_3);
        }
      }
    } while ((uVar5 == 0 || uVar3 == 0) || (uVar8 == 0));
    in_stack_00000018 = in_stack_00000018 + 1;
    param_1 = 0xa15;
    param_2 = _LAB_2c64b244;
  } while( true );
}

