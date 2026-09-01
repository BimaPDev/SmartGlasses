/* FUN_1000be1c @ 0x1000be1c */

void FUN_1000be1c(char *param_1,int param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined4 local_34;
  int local_14;
  
  if (0x1f < param_3) {
    param_3 = 0x20;
  }
  local_14 = *DAT_1000bf30;
  iVar1 = FUN_1000bcb4(param_1,&local_34,param_3,0);
  if (iVar1 != 0) {
    cVar2 = '\f';
    goto LAB_1000be72;
  }
  if (param_2 == 0x52) {
    FUN_1000bc84(param_1,0);
    FUN_1011598c(local_34 * 1000 + 1);
    FUN_1005576c(0);
    cVar2 = '\0';
    goto LAB_1000be72;
  }
  if (0x10 < (param_2 - 0x62U & 0xff)) {
switchD_1000be52_caseD_65:
    FUN_1000bdec(param_1);
    FUN_1000bc84(param_1,0x21);
    cVar2 = '!';
    goto LAB_1000be72;
  }
  switch(param_2) {
  case 0x62:
    FUN_1000bc84(param_1,0);
    (**(code **)(param_1 + 0x18))(1,local_34,0);
    break;
  case 99:
    goto switchD_1000be52_caseD_63;
  case 100:
    FUN_1000bc84(param_1,0);
    cVar2 = '\x15';
    goto LAB_1000be72;
  default:
    goto switchD_1000be52_caseD_65;
  case 0x69:
    cVar2 = param_1[6];
    goto LAB_1000bebe;
  case 0x6f:
    if ((char)local_34 == *param_1) {
      cVar2 = '\0';
      param_1[2] = param_1[2] | 4;
      param_1[3] = param_1[4];
    }
    else {
      cVar2 = '\x1f';
    }
LAB_1000bebe:
    FUN_1000bc84(param_1,cVar2);
    goto LAB_1000be72;
  case 0x70:
    *(undefined2 *)(param_1 + 10) = (undefined2)local_34;
    *(undefined2 *)(param_1 + 0xc) = local_34._2_2_;
  case 0x72:
    FUN_1000bc84(param_1,0);
  }
  do {
    cVar2 = '\0';
LAB_1000be72:
    while( true ) {
      if (*DAT_1000bf30 == local_14) {
        return;
      }
      FUN_1013cdc0(cVar2);
switchD_1000be52_caseD_63:
      FUN_1000bc84(param_1,0);
      FUN_1000bdb4(param_1);
      FUN_1000ba14(param_1);
      if (param_1[1] != '\0') break;
      FUN_1000ba4c(param_1);
      cVar2 = '\0';
    }
  } while( true );
}

