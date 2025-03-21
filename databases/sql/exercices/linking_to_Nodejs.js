const sqlite = require("sqlite3").verbose();
let db = new sqlite.Database("Blog.db", 
    error=> {
        if (error) {console.log(error.message);}
        else {console.log("connected");}
    }
);

db.all(
    "SELECT C.Content, C.Name, A.articlename, A.date "+
    "FROM Articles AS A INNER JOIN Comments AS C ON A.ArticleID = C.ArticleID",
    (error, table)=>{
        if(error) console.log(error.message);
        else console.log(table);
    }
);

db.close(
    error => {
        if(error) console.log(error.message);
        else console.log("closed");
    }
);