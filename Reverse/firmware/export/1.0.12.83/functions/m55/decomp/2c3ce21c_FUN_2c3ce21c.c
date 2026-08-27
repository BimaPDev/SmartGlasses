/* FUN_2c3ce21c @ 0x2c3ce21c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c3ce35e) */

void FUN_2c3ce21c(uint param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  int *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined1 *puVar6;
  
  puVar6 = &stack0xfffffffc;
  iVar5 = *(int *)(param_1 + 0x30);
  uVar3 = param_1 + 0xd9;
  if (0xffffff26 < param_1 && uVar3 != 0) {
    unaff_r6 = (uint)*(ushort *)(param_2 + 4) << 2;
    puVar4 = param_2;
    if ((int)param_2 < 0 == SCARRY4(param_1,0xd9)) {
      bVar1 = *(byte *)(param_3 * 2 + 0x1c);
      puVar6 = &stack0x0000000c;
      *param_2 = (char)param_2;
      *(int **)(unaff_r7 + (uint)bVar1) = unaff_r5;
      puVar4 = (undefined1 *)(uint)*(ushort *)(param_2 + 4);
      param_2[2] = (char)param_2;
    }
    *(undefined1 **)(puVar6 + 0x14) = puVar4;
    param_3 = *unaff_r5;
    uVar3 = param_3 << 1;
    if (uVar3 == 0 || (int)uVar3 < 0 != SCARRY4(param_1,0xd9)) {
      uVar3 = (uint)*(ushort *)(param_2 + 4);
      *(ushort *)(param_2 + 0x1c) = *(ushort *)(param_2 + 4);
    }
  }
  *(uint *)(puVar6 + 0x14) = uVar3;
  uVar2 = *(ushort *)(*(ushort *)(iVar5 + 6) + 4);
  *(int *)(puVar6 + 0x220) = unaff_r6;
  *(int *)(uint)uVar2 = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

