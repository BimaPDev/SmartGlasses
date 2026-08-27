/* FUN_2c068d3a @ 0x2c068d3a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c068d3a(int param_1,undefined2 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_r4;
  uint uVar4;
  int unaff_r6;
  int unaff_r7;
  undefined4 *puVar5;
  undefined2 unaff_r9;
  
  bVar1 = bRam2c068d97;
  uVar4 = (uint)bRam2c068d97;
  *(undefined2 *)(unaff_r7 + 0x30) = param_2;
  uVar2 = (uint)bRam2c068d94;
  *(byte *)(uVar4 + 0x18) = bRam2c068d94;
  if (!SCARRY4(param_1,0x1f)) {
    *(undefined4 *)((int)unaff_r4 + unaff_r6) = *(undefined4 *)(uVar2 + 0x60);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam000000ca = 0xc6;
  puVar5 = (undefined4 *)(param_4 >> 0x14);
  pbRam000000c6 = param_3;
  *(uint *)(param_4 + 0x70) = uVar4;
  *unaff_r4 = param_3;
  unaff_r4[1] = param_4;
  unaff_r4[2] = uVar4;
  unaff_r4[3] = unaff_r6;
  *(char *)((unaff_r6 >> 0x19) + 0x1f) = (char)puVar5;
  *param_3 = bVar1;
  iVar3 = unaff_r4[0x14];
  *puVar5 = param_3;
  puVar5[1] = unaff_r6;
  puVar5[2] = puVar5;
  *(char *)((int)(unaff_r4 + 4) * 0x100) = (char)puVar5 + -0x7b;
  *(byte **)(uVar4 - 0x26) = param_3;
  *(undefined2 *)(iVar3 + -99) = unaff_r9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

