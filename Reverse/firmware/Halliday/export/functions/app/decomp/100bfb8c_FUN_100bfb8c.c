/* FUN_100bfb8c @ 0x100bfb8c */

undefined4 FUN_100bfb8c(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = DAT_100bfd18;
  FUN_1011dbf4(DAT_100bfd1c,0xffffffff);
  iVar3 = 0;
  piVar2 = piVar1;
  do {
    if (*piVar2 == 0) {
      piVar1[iVar3] = param_1;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 5);
  thunk_FUN_10113e2c(DAT_100bfd1c);
  if (iVar3 == 5) {
    FUN_100a5b78((DAT_100bfd24 - DAT_100bfd20) * 0x20 & 0xff00U | 0x4e0011,
                 PTR_s_sppble_add_stream_100bfd40,PTR_s_Failed_to_add_stream_handle__p_100bfd3c,
                 param_1);
  }
  else {
    piVar2 = (int *)FUN_100b9d90(0x80);
    if (piVar2 == (int *)0x0) {
      FUN_100a5b78(DAT_100bfd28 | (DAT_100bfd24 - DAT_100bfd20) * 0x20 & 0xff00U,
                   PTR_s_sppble_init_100bfd30,PTR_s_cache_stream_info_malloc_failed_100bfd2c);
      uVar4 = 0xfffffff4;
      goto LAB_100bfbe4;
    }
    FUN_1011ea48(piVar2,0,0x80);
    *piVar2 = *param_2;
    piVar2[2] = param_2[1];
    piVar2[3] = (uint)*(byte *)(param_2 + 2);
    piVar2[6] = param_2[3];
    piVar2[7] = param_2[4];
    piVar2[8] = param_2[5];
    piVar2[9] = param_2[6];
    piVar2[10] = param_2[7];
    piVar2[0xc] = param_2[8];
    piVar2[0xd] = param_2[9];
    iVar3 = param_2[10];
    if (iVar3 == 0) {
      iVar3 = 0x200;
    }
    piVar2[0xe] = iVar3;
    FUN_1013c856(piVar2 + 0x10);
    FUN_1013ca1a(piVar2 + 0x15,0,1);
    FUN_1013c856(piVar2 + 0x1b);
    iVar3 = *piVar2;
    *(int **)(param_1 + 0x54) = piVar2;
    if ((iVar3 == 0) || (iVar3 = FUN_100bd9c0(iVar3,PTR_DAT_100bfd44), -1 < iVar3)) {
      if (piVar2[9] != 0) {
        *(undefined **)(piVar2[9] + 8) = PTR_LAB_1013189c_1_100bfd54;
      }
      if (piVar2[8] != 0) {
        iVar3 = *(int *)(piVar2[8] + 0xc);
        *(undefined **)(iVar3 + 0x34) = PTR_LAB_100bf738_1_100bfd58;
        *(undefined **)(iVar3 + 0x38) = PTR_LAB_100bf8cc_1_100bfd5c;
        piVar2[1] = (int)PTR_FUN_100bfa44_1_100bfd60;
        FUN_100beebc(piVar2 + 1);
        return 0;
      }
      return 0;
    }
    FUN_100a5b78(DAT_100bfd48 | (DAT_100bfd24 - DAT_100bfd20) * 0x20 & 0xff00U,
                 PTR_s_sppble_register_100bfd50,PTR_s_Failed_register_spp_uuid_100bfd4c);
    FUN_100b9e04(piVar2);
  }
  uVar4 = 0xfffffffb;
LAB_100bfbe4:
  FUN_1011dbf4(DAT_100bfd1c,0xffffffff);
  iVar3 = 0;
  piVar2 = piVar1;
  do {
    if (param_1 == *piVar2) {
      piVar1[iVar3] = 0;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 5);
  thunk_FUN_10113e2c(DAT_100bfd1c);
  if (iVar3 == 5) {
    FUN_100a5b78((DAT_100bfd24 - DAT_100bfd20) * 0x20 & 0xff00U | 0x630011,
                 PTR_s_sppble_remove_stream_100bfd38,PTR_s_Failed_to_remove_stream_handle___100bfd34
                 ,param_1);
  }
  return uVar4;
}

