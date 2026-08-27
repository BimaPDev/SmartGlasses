/* FUN_2c0b63c0 @ 0x2c0b63c0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0b63c0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  bVar1 = *(byte *)(param_3 + param_4);
  uVar3 = *(uint *)(unaff_r7 + -0x20e + param_3);
  puVar4 = (undefined4 *)(param_4 & *(uint *)(*(ushort *)(unaff_r5 + 0x1a) + 0x44));
  if (puVar4 != (undefined4 *)0x0 && (int)puVar4 < 0 == SBORROW4(unaff_r7 + -0x13f,0xcf)) {
    *unaff_r4 = param_1;
    unaff_r4[1] = (uint)bVar1;
    unaff_r4[2] = param_3;
    unaff_r4[3] = unaff_r7 + -0x2c8;
    uRam00000007 = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar2 = *(char *)(param_3 * 2);
  *puVar4 = 0x2c0b654c;
  puVar4[1] = (uint)unaff_r4 & param_3;
  puVar4[2] = 0x70;
  puVar4[3] = ((int)cVar2 & uVar3) - 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

