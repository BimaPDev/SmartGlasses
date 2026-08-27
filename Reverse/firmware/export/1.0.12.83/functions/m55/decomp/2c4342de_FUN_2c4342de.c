/* FUN_2c4342de @ 0x2c4342de */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4343d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4342de(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_r3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_stack_00000284;
  
  piVar6 = (int *)(in_r3 >> 0x17);
  if (in_stack_00000284 == 0) {
    while( true ) {
      piVar1 = (int *)*piVar6;
      iVar3 = piVar6[2];
      if (piVar6[3] == 0) break;
      puVar4 = (undefined4 *)(uint)*(ushort *)(piVar6[4] + 0x2c);
      puVar7 = *(undefined4 **)(_LAB_2c434618 + (int)piVar1);
      puVar4[0xc] = puVar4;
      *piVar1 = iVar3;
      piVar1[1] = (int)puVar4;
      piVar1[2] = 0x2c4344ac;
      iRam2c4344ac = (int)(piVar1 + 3);
      uVar2 = puVar7[1];
      uVar5 = puVar7[2];
      uVar8 = puVar7[4];
      uVar9 = puVar7[5];
      *puVar4 = *puVar7;
      puVar4[1] = uVar2;
      puVar4[2] = puVar4;
      puVar4[3] = uVar5;
      puVar4[4] = uVar8;
      puVar4[5] = uVar9;
      piVar6 = piRam2c434380;
    }
    *(short *)(piVar6[1] + 6) = (short)piVar6[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

