/* FUN_2c0903d4 @ 0x2c0903d4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c0903d4(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined2 *unaff_r4;
  undefined4 *puVar4;
  undefined4 unaff_r5;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 in_cr0;
  undefined4 in_cr14;
  
  puVar6 = *(undefined4 **)(param_4 + 0x20);
  coprocessor_load(7,in_cr0,param_3 - 0x338);
  if (0xfffffffa < param_3 && (uint *)(param_3 + 5) != (uint *)0x0) {
    *(undefined4 *)(unaff_r4 + 0x20) = unaff_r5;
    param_4 = param_4 & (uint)unaff_r4;
    *(uint *)(param_3 + 8) = param_3;
    *(int *)param_2 = param_2;
    *(undefined4 *)(param_2 + 4) = unaff_r5;
    *(char *)(unaff_r4 + 0x32) = (char)param_4;
    *(short *)(param_4 + (int)(unaff_r4 + 0x30)) = (short)param_4;
    coprocessor_loadlong(6,in_cr14,unaff_r4 + 0x30);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r4 = (short)unaff_r5;
  puVar4 = (undefined4 *)(uint)*(ushort *)(param_4 + 0x30);
  *(uint *)(param_3 + 5) = param_4;
  puVar5 = (undefined4 *)(((int)param_4 >> 8) * 0x8000000);
  puVar3 = (undefined4 *)((int)param_4 >> 0x1f);
  *(undefined4 *)((int)puVar4 + 6) = 6;
  *puVar3 = 0;
  puVar3[1] = param_3;
  puVar3[2] = 0;
  puVar3[3] = puVar5;
  bVar2 = ((uint)puVar6 >> 2 & 1) == 0;
  puVar7 = (undefined2 *)((uint)puVar6 >> 3);
  if (bVar2 || puVar7 == (undefined2 *)0x0) {
    *puVar6 = 6;
    puVar6[1] = 0;
    puVar6[2] = puVar4;
    puVar6[3] = puVar7;
    puVar9 = puVar6 + 4;
    _HardFault = 6;
    *puVar7 = (short)puVar9;
    puVar3 = (undefined4 *)((int)puVar9 >> 0x20);
    puRam00000044 = puVar9;
    puVar6[8] = 0xe3;
    bVar2 = ((int)puVar9 >> 0x1f & 1U) != 0;
    bVar8 = (int)puVar9 < 0;
    software_interrupt(0x99);
    if (bVar2 && bVar8) {
      *(undefined4 *)(((int)puVar9 >> 0x1f) + 4) = 0;
    }
    else {
      _DAT_00000064 = 6;
      *puVar4 = 0x1c;
      puVar4[1] = 0;
      puVar4[2] = puVar4;
      puVar4[3] = 6;
      if (!bVar2 || !bVar8) {
        puVar3[0x19] = 6;
        *puVar5 = 0x1c;
        puVar5[1] = 0;
        puVar5[2] = puVar5;
        puVar5[3] = 6;
        if (!bVar2 || !bVar8) {
          *puVar3 = 0x1c;
          puVar3[1] = 0;
          uRam000000d8 = 0xd8;
          uRam000000dc = 0;
          uRam000000e0 = _Reserved1;
          uRam000000e4 = _Reserved2;
          uRam000000ec = _Reserved4;
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfc,0x2c08fa9c);
          puRam000000e8 = puVar5;
          (*pcVar1)();
        }
        return 0xb0000000bd;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 || puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)puVar5 = 0;
  puRam000000e8 = (undefined4 *)0x0;
  uRam000000f0 = 0;
  uRam000000ec = param_3;
  _DAT_000000f4 = puVar5;
  *(short *)(uint)_Reserved5 = (short)puVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

