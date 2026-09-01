/* FUN_100e6458 @ 0x100e6458 */

void FUN_100e6458(undefined4 param_1,undefined4 param_2,uint param_3,byte *param_4,
                 undefined2 param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  code *pcVar6;
  uint uVar7;
  undefined1 local_24 [4];
  undefined2 local_20;
  
  FUN_100e6120(0xffffffff,0xffffffff);
  puVar2 = (undefined4 *)FUN_100e5da8(param_1,param_2);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100a5b78(((int)PTR_DAT_100e65c8 - (int)PTR_DAT_100e65cc) * 0x20 & 0xff00U | 0x2b80021,
                 PTR_s_Can_t_find_client_info_100e65d0);
    goto LAB_100e649e;
  }
  uVar4 = (uint)*(byte *)((int)puVar2 + 0xd);
  if (8 < uVar4) goto LAB_100e649e;
  bVar1 = *(byte *)((int)puVar2 + 0xe);
  *(byte *)((int)puVar2 + 0xe) = bVar1 & 0xbf;
  if ((int)((uint)bVar1 << 0x1a) < 0) {
    *(byte *)((int)puVar2 + 0xe) = bVar1 & 0x9f;
    FUN_10138b22();
    FUN_100e0754(*puVar2,*(undefined1 *)(puVar2 + 2),0);
    *(undefined1 *)((int)puVar2 + 0xd) = 9;
    goto LAB_100e649e;
  }
  if (param_3 == 1) {
    if (*param_4 != 8) {
      uVar7 = ((int)PTR_DAT_100e65c8 - (int)PTR_DAT_100e65cc) * 0x20 & 0xff00;
      uVar3 = DAT_100e65e0;
      puVar5 = DAT_100e65e4;
      param_3 = (uint)*param_4;
      goto LAB_100e654c;
    }
    param_3 = (uint)param_4[1];
    if (param_3 == 2) {
      bVar1 = PTR_DAT_100e65d4[3];
      *(ushort *)((int)puVar2 + 10) = *(ushort *)(param_4 + 2) << 8 | *(ushort *)(param_4 + 2) >> 8;
      if ((int)((uint)bVar1 << 0x1b) < 0) {
        FUN_10119dc2(PTR_s_pbap_max_list_cnt__d_100e65d8);
      }
      if ((puVar2[5] != 0) && (pcVar6 = *(code **)(puVar2[5] + 0xc), pcVar6 != (code *)0x0)) {
        local_24[0] = 0;
        local_20 = *(undefined2 *)((int)puVar2 + 10);
        (*pcVar6)(*puVar2,*(undefined1 *)(puVar2 + 3),local_24);
      }
      goto LAB_100e649e;
    }
    uVar3 = ((int)PTR_DAT_100e65c8 - (int)PTR_DAT_100e65cc) * 0x20 & 0xff00U | 0x2200031;
    puVar5 = PTR_s_Wait_todo_parse_len__d_100e65dc;
LAB_100e6536:
    FUN_100a5b78(uVar3,puVar5,param_3);
  }
  else {
    if (param_3 == 2) {
      FUN_100e5e5c(puVar2,param_4,param_5);
    }
    else {
      if (param_3 != 4) {
        if (param_3 == 8) {
          if ((uVar4 - 7 < 2) || (uVar4 == 5)) goto LAB_100e655a;
          uVar7 = ((int)PTR_DAT_100e65c8 - (int)PTR_DAT_100e65cc) * 0x20 & 0xff00;
          uVar3 = DAT_100e65f0;
          puVar5 = DAT_100e65f4;
          param_3 = uVar4;
        }
        else {
          uVar7 = ((int)PTR_DAT_100e65c8 - (int)PTR_DAT_100e65cc) * 0x20 & 0xff00;
          uVar3 = DAT_100e65fc;
          puVar5 = DAT_100e65f8;
        }
LAB_100e654c:
        uVar3 = uVar3 | uVar7;
        goto LAB_100e6536;
      }
      if (param_4 != (byte *)0x0) {
        FUN_100e5e5c(puVar2,param_4,param_5);
      }
      FUN_100a5b78(DAT_100e65e8 | ((int)PTR_DAT_100e65c8 - (int)PTR_DAT_100e65cc) * 0x20 & 0xff00U,
                   DAT_100e65ec);
      FUN_10138ace(puVar2,5);
    }
LAB_100e655a:
    FUN_10138ace(puVar2,4);
  }
LAB_100e649e:
  FUN_100e6114();
  return;
}

