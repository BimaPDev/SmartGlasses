/* FUN_2c434c84 @ 0x2c434c84 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c434c84(uint param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  uint unaff_r6;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_4 + 0x1e);
  if (SCARRY4(param_4 + 0xe4,uVar3 + 0xb7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(uint *)(uVar3 + 0xbb);
  uRam2c434dbc = *(undefined4 *)(uVar3 + 0xbf);
  _LAB_2c434dc4 = *(undefined4 *)(uVar3 + 0xc3);
  uRam2c434dcc = *(uint *)(uVar3 + 199) ^ unaff_r6;
  *(char *)(unaff_r6 + 0x19) = (char)param_1;
  uRam2c434dc8 = ~uVar2;
  _LAB_2c434db8 = param_1 - 0xd8;
  puRam2c434dc0 = &LAB_2c434db8;
  if (param_1 < 0xd8) {
    sVar1 = (short)_LAB_2c434db8;
    *(undefined1 *)(param_4 + 0x17) = param_3;
    *(short *)(param_1 - 0x9e) = sVar1 + 0x2c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(uVar2 + 1) = (char)uRam2c434dc8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

