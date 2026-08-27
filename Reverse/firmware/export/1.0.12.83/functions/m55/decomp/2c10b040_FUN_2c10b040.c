/* FUN_2c10b040 @ 0x2c10b040 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c10b040(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  int unaff_r6;
  uint uVar3;
  int unaff_r7;
  
  *(uint *)(unaff_r7 + 0x28) = param_2 >> 0x18;
  iVar1 = (int)*(char *)(param_1 * 2);
  uVar3 = iVar1 << 2;
  puVar2 = (uint *)(param_1 * -0x80000000);
  if ((param_1 & 2) == 0 || puVar2 == (uint *)0x0) {
    *(int *)(param_3 + 0x74) = iVar1;
    *puVar2 = param_1;
    puVar2[1] = (uint)puVar2;
    puVar2[2] = param_3;
    puVar2[3] = uVar3;
    uVar3 = (int)param_3 >> 0x15;
  }
  else {
    *(char *)(iVar1 + 0x11) = (char)param_1;
  }
  *(uint *)((unaff_r6 >> 0x19) + 0x50) = uVar3;
  *(uint *)(param_1 + uVar3) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

