/* FUN_2c455a8a @ 0x2c455a8a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c455a8a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_r2;
  uint extraout_r3;
  undefined4 *puVar4;
  undefined4 unaff_r5;
  
  puVar2 = (undefined4 *)
           func_0x2cea215c(param_1,param_2,0x66,*(undefined2 *)(param_4 + 4),param_2,param_3,param_4
                          );
  uVar3 = *puVar2;
  puVar4 = (undefined4 *)puVar2[1];
  *(undefined4 **)(extraout_r2 + 0x68) = puVar2 + 3;
  *puVar4 = uVar3;
  puVar4[1] = extraout_r2;
  puVar4[2] = unaff_r5;
  puVar4[3] = extraout_r3 >> 0xd;
  *(short *)((int)(puVar4 + 4) * 2) = (short)unaff_r5;
  cVar1 = *(char *)(extraout_r3 + *(ushort *)(extraout_r3 + 6));
  *(char *)(cVar1 + 0x11) = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

