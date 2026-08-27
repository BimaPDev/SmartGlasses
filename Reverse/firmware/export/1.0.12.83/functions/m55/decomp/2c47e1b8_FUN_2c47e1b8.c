/* FUN_2c47e1b8 @ 0x2c47e1b8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47e1b8(char param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_r5;
  ushort *unaff_r6;
  undefined4 *puVar5;
  undefined4 *puVar7;
  ushort *in_stack_00000054;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 *puVar6;
  
  if ((char)unaff_r6 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (uint)*unaff_r6;
  puVar4 = (undefined4 *)(int)param_3;
  uVar1 = 0;
  if (param_1 != '\0') {
    uVar1 = 0;
    if (param_1 != '\0') {
      FUN_2c6741e8(0x711,_LAB_2c47e528);
      if (*(int *)(unaff_r5 + -0xc4) == 0) {
        puVar7 = _LAB_2c47e52c + 10;
        puVar5 = _LAB_2c47e52c;
        do {
          puVar6 = puVar5 + 1;
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)(*puVar4,puVar4[1],puVar4[2],puVar4[3],in_stack_00000068,
                               in_stack_0000006c,in_stack_00000070,in_stack_00000074,100,3);
          }
          puVar5 = puVar6;
        } while (puVar6 != puVar7);
        iVar3 = *(int *)(*(int *)(unaff_r5 + -0xc4) + 0x1cc);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(1,iVar3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(1);
      }
      uVar1 = 0xc;
      in_stack_00000054 = unaff_r6;
    }
    uVar2 = FUN_2c473e44(uVar1);
    if (uVar2 == 0) {
      FUN_2c6741e8(0x711,_LAB_2c47e5b4,_LAB_2c47e5b8);
    }
    FUN_2c47cf18(uVar2,in_stack_00000054,5,1,1,0);
    uVar1 = 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(uVar1,uVar2);
}

