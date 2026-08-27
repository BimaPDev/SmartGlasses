/* FUN_2c45ae28 @ 0x2c45ae28 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c45af2e) */

void FUN_2c45ae28(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r5;
  uint uVar7;
  undefined2 unaff_r6;
  undefined4 *puVar8;
  int unaff_r11;
  undefined4 in_cr12;
  int in_stack_00000204;
  undefined4 in_stack_0000021c;
  
  bVar1 = *(byte *)(param_3 + param_2);
  *(undefined2 *)(unaff_r5 + 0x3a) = unaff_r6;
  coprocessor_load(0xc,in_cr12,unaff_r11 + -0x1cc);
  software_bkpt(0x61);
  uVar2 = *(ushort *)(bVar1 + 0x2a);
  *(short *)(in_stack_00000204 + 0x3e) = (short)in_stack_00000204;
  *(uint *)(param_3 + 0x60) = (uint)uVar2;
  uVar5 = param_3 + 0x94;
  if (-0x95 < param_3) {
    return;
  }
  uVar2 = *(ushort *)(param_3 + 0xa8);
  iVar4 = *(int *)(param_3 + 0x137);
  *(short *)(iVar4 + 4) = (short)in_stack_00000204;
  puVar8 = *(undefined4 **)(uVar2 + 0x78);
  *(int *)(iVar4 + 0x68) = iVar4;
  uVar3 = uRam2c45af34;
  uVar7 = (uint)uRam000000dd;
  *puVar8 = 0x21;
  puVar8[1] = bVar1 + 0x49d;
  puVar8[2] = uVar5;
  puVar8[3] = uVar3;
  puVar8[4] = uVar7;
  puVar8[5] = in_stack_0000021c;
  uVar6 = puVar8[0xd];
  *(undefined4 *)(uVar6 + 0x48) = 0;
  if (0x11 < uVar6) {
    puVar8[0x1c] = 0x21;
    if ((CARRY4(uVar7,uVar5) && uVar7 + uVar5 != 0) &&
       ((int)(uVar7 + uVar5) < 0 == SCARRY4(uVar7,uVar5))) {
      *(undefined1 *)((int)puVar8 + 0x36) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar6 != 0x11) {
    iRam000000c3 = uVar6 * 0x20000;
    uRam000000cb = 0;
    uRam000000c7 = uVar7;
    *(undefined1 *)(uVar6 + 9) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

